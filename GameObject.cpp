#include "Main.h"

GameObject::GameObject()
{
	x = y = 0;
	bmp = NULL; //NULL is default for non-initialized pointers (means false or 0)
}
GameObject::~GameObject()
{
	//release anything dynamically created by this object
}
void GameObject::Draw()
{
	if (bmp != NULL) //make sure we have a bitmap to draw
		al_draw_bitmap(bmp, x, y, 0);
}

void GameObject::Move()
{
	x += sx;
	y += sy;
}

void GameObject::SetBitmap(ALLEGRO_BITMAP* b)
{
	//make sure the bitmap is valid
	if (b != NULL)
		bmp = b;
}
ALLEGRO_BITMAP* GameObject::GetBitmap()
{
	return bmp;
}
void GameObject::SetSpeed(int speedx, int speedy)
{
	sx = speedx;
	sy = speedy;
}

void GameObject::GetSpeed(int* psx, int* psy)
{
	*psx = sx;
	*psy = sy;
}