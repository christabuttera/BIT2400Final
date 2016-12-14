/*
Base Game v4

Learning Objectives:
1. access control (public/private/protected)
2. get/set functions for non-public members
3. modifying existing functions of base class
4. text and font (Main.cpp and Render::End)
5. external variable (Render.cpp)


Copyright (c) 2016, Ali Arya
*/

//Using Allegro
//1- create a Win32 Project (no Console)
//2- include "allegro5/allegro.h"
//3- add allegro-5.0.10-monolith-md-debug.lib to Additional Dependencies, in Properties/Linker/Input
//4- In Linker/System set the SubSystem to Not Set if you want to see text window
//http://alleg.sourceforge.net/a5docs/5.0.10/
//


#include "Main.h"

//====================================================================
// Globals
//====================================================================

//global variable for display
ALLEGRO_DISPLAY* display = NULL; //ALLEGRO_DISPLAY is a "user defined type" in Allegro. * shows a pointer

//global variable for font
ALLEGRO_FONT *font;

//initialzie Allegro components
void InitAllegro(int W, int H)
{

	//initialize allegro
	if (!al_init())
	{
		printf("failed to initialize allegro!\n");
	}

	//initialize display screen
	display = al_create_display(W, H);
	if (!display)
	{
		printf("failed to create display!\n");
		exit(0);
	}
	else
	{
		printf("ok");
		al_clear_to_color(al_map_rgb(0, 0, 0));
	}

	//initialize keyboard
	if (!al_install_keyboard())
	{
		printf("failed to install keyboard!\n");
		exit(0);
	}

	//initialize image addon
	if (!al_init_image_addon())
	{
		printf("failed to initialize image addon!\n");
		exit(0);
	}

	//initialize mouse
	if (!al_install_mouse())
	{
		printf("failed to install mouse!\n");
		exit(0);
	}
	//initialize primitive shapes
	if (!al_init_primitives_addon())
	{
		printf("failed to initialize primitives!\n");
		exit(0);
	}
	//initialize font
	al_init_font_addon(); // initialize the font addon
	al_init_ttf_addon();// initialize the ttf (True Type Font) addon	 (get fonts here: http://www.1001freefonts.com/)
	font = al_load_ttf_font("uchiyama.ttf", 12, 0); //secodn variable is size
	//font = al_load_font("a4_font.tga", 0, 0); //size variable doesn't matter becasue the font is fixed-size 
	if (!font)
	{
		printf("failed to create font!\n");
		exit(0);
	}
}

//End and clean up Allegro components
void EndAllegro()
{
	al_destroy_display(display);
}


//main function
void main()
{
	///////////////////////////////////
	// INITIALIZE
	///////////////////////////////////

	//initialize allegro
	int sw = 640;
	int sh = 480;
	InitAllegro(sw, sh);

	//create main object
	Game game;

	///////////////////////////////////
	// LOOP (includes update and draw)
	///////////////////////////////////

	game.Run();

	//clean up
	EndAllegro();
}