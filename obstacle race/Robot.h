#pragma once
#include "Participant.h"
class Robot : public Participant
{
	string name;
	double jump_height;
	double running_distance;
public:
	Robot();
	Robot(const char* n);
	Robot(const char* n, double j, double r);
	void Run() const override;
	void Jump() const override;
	string GetName() const override;
	double GetJumpHeight() const override;
	double GetRunDistance() const override;
};

