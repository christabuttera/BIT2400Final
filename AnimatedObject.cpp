#include "Main.h"


AnimatedObject::AnimatedObject()
{
	currentFrame = 0;
}


AnimatedObject::~AnimatedObject()
{
	for (int i = 0; i < NUM_FRAMES; i++)
		al_destroy_bitmap(frames[i]);
}

void AnimatedObject::Advance()
{
	if (currentFrame < NUM_FRAMES-1)
		currentFrame++;
	else
		currentFrame = 0;

	//bmp is private member of GameObject (base class) so we can't access it directly
	SetBitmap(frames[currentFrame]);
}