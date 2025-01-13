#pragma once
#include "Participant.h"
class Cat : public Participant
{
public:
	Cat();
	Cat(const char* n);
	Cat(const char* n, double j, double r);
	void Run() const override;
	void Jump() const override;
};

