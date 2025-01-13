#pragma once
#include <iostream>
#include <string>

using namespace std;

class Participant
{
protected:
    string name;
    double jump_height;
    double running_distance;

public:
    Participant(const char* n, double j, double r): name(n), jump_height(j), running_distance(r) {}
    virtual void Run() const = 0;
    virtual void Jump() const = 0;
    virtual string GetName() const { return name; }
    virtual double GetJumpHeight() const { return jump_height; }
    virtual double GetRunDistance() const { return running_distance; }

    virtual ~Participant() = default;
};

