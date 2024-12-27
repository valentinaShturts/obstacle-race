#pragma once
#include "Participant.h"
class Cat : public Participant
{
	string name;
	double jump_height;
	double running_distance;
public:
	Cat();
	Cat(const char* n);
	Cat(const char* n, double j, double r);
	void Run() const override;
	void Jump() const override;
	string GetName() const override;
	double GetJumpHeight() const override;
	double GetRunDistance() const override;
};

