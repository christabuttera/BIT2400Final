#pragma once

class Edge :
	public Effect
{
public:
	Edge();
	~Edge();
	void Apply(ALLEGRO_BITMAP* img);
};

