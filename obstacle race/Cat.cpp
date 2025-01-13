#include "Cat.h"

Cat::Cat() : Participant("Vasya", 3, 500) {}

Cat::Cat(const char* n) : Participant(n, 3, 500) {}

Cat::Cat(const char* n, double j, double r) : Participant(n,j,r) {}

void Cat::Run() const
{
	cout << "Cat " << name << " is running" << endl;
}

void Cat::Jump() const
{
	cout << "Cat " << name << " is jumping" << endl;
}


