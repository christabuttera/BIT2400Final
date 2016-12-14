#pragma once
class Render
{
public:
	
	Edge effect;

	int xscroll;
	int yscroll;
	Render();
	~Render();

	void Draw(GameObject* obj);			//draw an object 
	void Begin(ALLEGRO_BITMAP* bg);		//start a frame by drawing the background and other possible actions
	void End();							//end teh frame by moving to primary buffer and other possible actions
};

