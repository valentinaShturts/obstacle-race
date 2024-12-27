#pragma once
#include "Obstacle.h"
class Wall :public Obstacle
{
	double height;
public:
	Wall();
	Wall(double h);
	bool Overcome(const Participant& participant) const override;
};

