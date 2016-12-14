//this is a non-standard but widely supported way to make sure this file is included only once in compile
//header files can be included more than once and cause error
#pragma once

//another methods is using #define, #ifdef and #endif
#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H //see #endif at the end

class GameObject
{
	//private: is default
	//to prevent program from crashing, we want to make sure that bmp is always valid
	//we make it private so it can be changed only by calling SetBitmap function and there we check the bitmap to be valid
	//even child classes can't directly change bmp to avoid mistakes
	ALLEGRO_BITMAP* bmp; //a pointer to bitmap
protected:
	//speed should also be changed through SetSpeed function, but child classes can directly access it for convenience (not very critical)
	int sx;
	int sy;
public:
	int x;
	int y;
	GameObject();
	~GameObject();
	void Draw();
	void Move();
	//for accessing non-public members
	void SetBitmap(ALLEGRO_BITMAP* b);
	ALLEGRO_BITMAP* GetBitmap(); //to get the value
	void SetSpeed(int speedx, int speedy);
	void GetSpeed(int* psx, int* psy); //get multiple data using pointers
};
#endif //GAMEOBJECT_H