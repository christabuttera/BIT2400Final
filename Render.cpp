#include "Main.h"

//external variable is defined in another source file
extern ALLEGRO_FONT *font;

Render::Render()
{
	xscroll = yscroll = 0;
}


Render::~Render()
{
}

void Render::Draw(GameObject* obj)
{
	ALLEGRO_BITMAP* b = al_clone_bitmap(obj->GetBitmap());
	effect.original = obj->GetBitmap();
	effect.Apply(b);
	al_draw_bitmap(b, obj->x - xscroll, obj->y - yscroll, 0);
	al_destroy_bitmap(b);

	//al_draw_bitmap(obj->GetBitmap(), obj->x - xscroll, obj->y - yscroll, 0);
}

void Render::Begin(ALLEGRO_BITMAP* bg)
{
	al_draw_bitmap(bg, 0-xscroll, 0-yscroll, 0);
}
void Render::End()
{
	char text[] = "Sample Game";
	al_draw_text(font, al_map_rgb(255, 255, 255), 0, 0, 0, text);

	al_flip_display();
}