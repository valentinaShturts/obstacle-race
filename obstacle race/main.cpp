#include <iostream>
#include <ctime>
#include <vector>
#include "Cat.h"
#include "Human.h"
#include "Robot.h"
#include "RunningTrack.h"
#include "Wall.h"

using namespace std;



void ObstacleRace(const vector<Participant*>& participants, const vector<Obstacle*>& obstacles) 
{
    for (Participant* participant : participants) 
    {
        int obstacles_passed = 0;
        for (Obstacle* obstacle : obstacles) 
        {
            if (obstacle->Overcome(*participant)) 
            {
                obstacles_passed++;
            }
            else 
            {
                cout << "Participant " << participant->GetName() << " passed " << obstacles_passed << " obstacles." << endl;
                break;
            }
        }

        if (obstacles_passed == obstacles.size()) 
        {
            cout << "Participant " << participant->GetName() << " successfully passed all obstacles!" << endl;
        }
    }
}

int main()
{
    srand(static_cast<unsigned>(time(0)));

    Human human("Ivan");
    Cat cat;
    Robot robot;

    vector<Participant*> participants = { &human, &cat, &robot };

    RunningTrack track1;
    Wall wall1;
    RunningTrack track2;
    Wall wall2;

    vector<Obstacle*> obstacles = { &track1, &wall1, &track2, &wall2 };

    cout << "--- Obstacle Race Begin!!! ---" << endl << endl;

    ObstacleRace(participants, obstacles);
	return 0;
}