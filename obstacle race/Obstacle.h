#pragma once
#include <iostream>
#include <string>
#include "Participant.h"
using namespace std;

class Obstacle
{
public:
	virtual bool Overcome(const Participant& participant) const = 0;
};

