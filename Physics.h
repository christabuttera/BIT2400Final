#pragma once

enum CollisionMethod
{
	TopLeft,
	Centre,
	InsideRect
};

class Physics
{
public:
	CollisionMethod collisionMethod;

	Physics();
	~Physics();

	bool Collision(GameObject* o1, GameObject* o2);
	bool Collision1(GameObject* o1, GameObject* o2);
	bool Collision2(GameObject* o1, GameObject* o2);
	bool Collision3(GameObject* o1, GameObject* o2);

	void Move(GameObject* obj);
};

