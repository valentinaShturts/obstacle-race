#pragma once
#include <iostream>
#include <string>

using namespace std;

class Participant
{
public:
	virtual void Run() const = 0; 
	virtual void Jump() const = 0;
	virtual string GetName() const = 0;
	virtual double GetJumpHeight() const = 0;
	virtual double GetRunDistance() const = 0;
};

