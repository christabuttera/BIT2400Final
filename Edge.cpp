#include "Main.h"



Edge::Edge()
{
}


Edge::~Edge()
{
}

void Edge::Apply(ALLEGRO_BITMAP* img)
{
	//prepare
	Begin(img);

	//go through all pixels
	for (int i = 0; i < w; i++)
	{
		for (int j = 0; j < h; j++)
		{
			//read colour value from original
			ALLEGRO_COLOR c  = al_get_pixel(original, i, j);
			ALLEGRO_COLOR c1 = al_get_pixel(original, i-1, j);
			ALLEGRO_COLOR c2 = al_get_pixel(original, i+1, j);

			unsigned char r, g, b, r1, g1, b1, r2, g2, b2;
			al_unmap_rgb(c, &r, &g, &b);
			al_unmap_rgb(c1, &r1, &g1, &b1);
			al_unmap_rgb(c2, &r2, &g2, &b2);

			if(r==0 && b==0 && g==0 && (r1==255 || b1==255 || g1==255 || r2 == 255 || b2 == 255 || g2 == 255) )
				al_put_pixel(i, j, al_map_rgb(255, 0, 0));
			else
				al_put_pixel(i, j, c);
		}
	}

	//wrap up
	End(img);
}
