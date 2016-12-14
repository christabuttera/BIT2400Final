#include "Main.h"


SmartEnemy::SmartEnemy()
{
	target = NULL;
}


SmartEnemy::~SmartEnemy()
{
}

void SmartEnemy::Move()
{
	//determine speed (direction) based on target location
	sx = sy = 0;
	if (target != NULL)
	{
		if (x > target->x)
			sx = -1;
		if (x < target->x)
			sx = 1;
		if (y > target->y)
			sy = -1;
		if (y < target->y)
			sy = 1;
	}

	//actual move happens in Physics class
}
