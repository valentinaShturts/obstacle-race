#pragma once
#include "Participant.h"

class Human: public Participant
{
public:
	Human();
	Human(const char* n);
	Human(const char* n, double j, double r);
    void Run() const override;
	void Jump() const override;
};

