#include "Robot.h"

Robot::Robot() : name("Vasya 3.0"), jump_height(0.4), running_distance(8545){}

Robot::Robot(const char* n) : name(n), jump_height(0.4), running_distance(8545) {}

Robot::Robot(const char* n, double j, double r) : name(n), jump_height(j), running_distance(r) {}

void Robot::Run() const
{
	cout << "Robot " << name << " is running" << endl;
}

void Robot::Jump() const
{
	cout << "Robot " << name << " is jumping" << endl;
}

string Robot::GetName() const
{
	return name;
}

double Robot::GetJumpHeight() const
{
	return jump_height;
}

double Robot::GetRunDistance() const
{
	return running_distance;
}
