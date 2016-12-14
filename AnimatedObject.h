#pragma once

#define NUM_FRAMES 3

//animation needs an array of frames
//we need to know which frame to show at any time
//for any new piece of information, add a new variable!
class AnimatedObject :	public GameObject
{
public:
	ALLEGRO_BITMAP* frames[NUM_FRAMES];
	int currentFrame; 

	AnimatedObject();
	~AnimatedObject();

	//we need a new function to advance the animation
	void Advance();
};

