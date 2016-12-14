#pragma once

#define NUM_SIMPLE_ENEMIES 2

class Game
{
public:
	//variables
	ALLEGRO_KEYBOARD_STATE key_state; //ALLEGRO_KEYBOARD_STATE is a "user define type" in Allegro
	ALLEGRO_MOUSE_STATE mouse_state;

	Render render;
	Physics physics;

	AnimatedObject player;
	ALLEGRO_BITMAP* pbmp;
	SimpleEnemy enemy1[NUM_SIMPLE_ENEMIES];
	SmartEnemy  enemy2;
	ALLEGRO_BITMAP* ebmp;

	ALLEGRO_BITMAP* bg;
	int bgw;
	int bgh;

	bool end;

	//functions
	Game();
	~Game();
	void Run();
	void Update();
	void Draw();
};
