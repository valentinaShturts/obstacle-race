#include "Cat.h"

Cat::Cat() : name("Vasya"), jump_height(3.0), running_distance(500) {}

Cat::Cat(const char* n) : name(n), jump_height(3.0), running_distance(500) {}

Cat::Cat(const char* n, double j, double r) : name(n), jump_height(j), running_distance(r) {}

void Cat::Run() const
{
	cout << "Cat " << name << " is running" << endl;
}

void Cat::Jump() const
{
	cout << "Cat " << name << " is jumping" << endl;
}

string Cat::GetName() const
{
	return name;
}

double Cat::GetJumpHeight() const
{
	return jump_height;
}

double Cat::GetRunDistance() const
{
	return running_distance;
}

