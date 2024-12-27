#include "Human.h"

Human::Human(): name("Vasya"), jump_height(1.0), running_distance(2320){}

Human::Human(const char* n) : name(n), jump_height(1.0), running_distance(2320) {}

Human::Human(const char* n, double j, double r) : name(n), jump_height(j), running_distance(r) {}

void Human::Run() const
{
	cout << "Human " << name << " is running" << endl;
}

void Human::Jump() const
{
	cout << "Human " << name << " is jumping" << endl;
}

string Human::GetName() const
{
	return name;
}

double Human::GetJumpHeight() const
{
	return jump_height;
}

double Human::GetRunDistance() const
{
	return running_distance;
}
