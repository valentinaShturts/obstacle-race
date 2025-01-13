#include "Human.h"

Human::Human() : Participant("Vasya", 1.0, 2320.0) {}

Human::Human(const char* n) : Participant(n, 1.0, 2320.0) {}

Human::Human(const char* n, double j, double r) : Participant(n, j, r) {}

void Human::Run() const
{
	cout << "Human " << name << " is running" << endl;
}

void Human::Jump() const
{
	cout << "Human " << name << " is jumping" << endl;
}

