#include "Wall.h"

Wall::Wall()
{
	height = static_cast<double>(rand() % 4 + 0.1) + (rand() % 100) / 100.0;
}

Wall::Wall(double h) : height(h){}

bool Wall::Overcome(const Participant& participant) const
{
    participant.Jump();
    if (participant.GetJumpHeight() >= height)
    {
        cout << "Participant " << participant.GetName() << " overcame the wall in height " << height << " meters." << endl;
        return true;
    }
    else
    {
        cout << "Participant " << participant.GetName() << " did not overcome the wall in height " << height << " meters." << endl;
        return false;
    }
}
