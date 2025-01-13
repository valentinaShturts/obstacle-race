#pragma once
#include "Participant.h"
class Robot : public Participant
{
public:
	Robot();
	Robot(const char* n);
	Robot(const char* n, double j, double r);
	void Run() const override;
	void Jump() const override;
};

