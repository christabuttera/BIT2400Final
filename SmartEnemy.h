#pragma once

class SmartEnemy :	public GameObject
{
public:
	//add variable to base class
	GameObject* target; //this cannot be initialized by the object itself

	SmartEnemy();
	~SmartEnemy();

	//modify existing function from base class
	void Move();
};

