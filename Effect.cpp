#include "Main.h"
Effect::Effect() {
}
Effect::~Effect() {
}
void Effect::Begin(ALLEGRO_BITMAP* img) {
	//prepare bitmaps
	al_lock_bitmap(img, al_get_bitmap_format(img), ALLEGRO_LOCK_READWRITE);
	al_lock_bitmap(original, al_get_bitmap_format(original), ALLEGRO_LOCK_READWRITE);
	target = al_get_target_bitmap();
	al_set_target_bitmap(img);
	//get bitmap dimensions
	w = al_get_bitmap_width(img);
	h = al_get_bitmap_height(img);
}
void Effect::End(ALLEGRO_BITMAP* img) {
	//set target back
	al_set_target_bitmap(target);
	//move bitmap back to video memory
	al_unlock_bitmap(img);
	al_unlock_bitmap(original);
}
void Effect::Apply(ALLEGRO_BITMAP* img) {
	//prepare
	Begin(img);

	//go through all pixels
	for (int i = 0; i < w; i++)
	{
		for (int j = 0; j < h; j++)
		{
			//read colour value
			ALLEGRO_COLOR c = al_get_pixel(original, i, j); //read from original
			//make white
			al_put_pixel(i, j, al_map_rgb(255, 255, 255));
		}
	}

	//wrap up
	End(img);
}
