#pragma once
#include "Obstacle.h"

class RunningTrack : public Obstacle
{
	double length;
public:
	RunningTrack();
	RunningTrack(double l);
	bool Overcome(const Participant& participant) const override;
};

