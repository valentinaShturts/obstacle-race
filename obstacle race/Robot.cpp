#include "Robot.h"

Robot::Robot() : Participant("Vasya 3.0", 0.4, 8545){}

Robot::Robot(const char* n) : Participant(n, 0.4, 8545) {}

Robot::Robot(const char* n, double j, double r) : Participant(n,j,r) {}

void Robot::Run() const
{
	cout << "Robot " << name << " is running" << endl;
}

void Robot::Jump() const
{
	cout << "Robot " << name << " is jumping" << endl;
}

