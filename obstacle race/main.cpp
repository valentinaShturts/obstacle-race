#include <iostream>
#include <ctime>
#include <vector>
#include <windows.h>
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

void DeleteParticipants(vector<Participant*>& participants)
{
    for (auto* participant : participants) 
    {
        delete participant;
    }
    participants.clear();
}
void DeleteObstacles(vector<Obstacle*>& obstacles)
{
    for (auto* obstacle : obstacles) 
    {
        delete obstacle;
    }
    obstacles.clear();
}

void Menu(vector<Participant*>& participants, vector<Obstacle*>& obstacles)
{
    int choice;
    string bet;
    do
    {
        system("cls");
        cout << "\n--- Menu ---" << endl;
        cout << "1. Add participants" << endl;
        cout << "2. Add obstacles" << endl;
        cout << "3. Do a bet on participate" << endl;
        cout << "4. Start obstacle race" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1: 
        {
            int numParticipants;
            DeleteParticipants(participants);
            cout << "How many participants to add? ";
            cin >> numParticipants;

            for (int i = 0; i < numParticipants; ++i)
            {
                char name[100];
                cout << "Enter name of participant " << i + 1 << ": ";
                cin.ignore();  
                cin.getline(name, sizeof(name));

                int type = rand() % 3;

                if (type == 0)
                {
                    participants.push_back(new Human(name));
                }
                else if (type == 1)
                {
                    participants.push_back(new Cat(name));
                }
                else
                {
                    participants.push_back(new Robot(name));
                }
                cout << "Added participant: " << name << endl;
            }
            break;
        }
        case 2: 
        {
            int numObstacles;
            DeleteObstacles(obstacles);
            cout << "How many obstacles to add? ";
            cin >> numObstacles;

            for (int i = 0; i < numObstacles; ++i)
            {
                if (rand() % 2 == 0)
                {
                    obstacles.push_back(new RunningTrack());
                }
                else {
                    obstacles.push_back(new Wall());
                }
            }
            break;
        }
        case 3: 
        {
            if (participants.empty()) {
                cout << "Firstly add participants!!" << endl;
            }
            else {
                cout << "Who do you bet on? Members available: ";
                for (auto* participant : participants) {
                    cout << participant->GetName() << " ";
                }
                cout << endl;
                cin >> bet;
            }
            break;
        }
        case 4:
        {
            if (participants.empty() || obstacles.empty()) {
                cout << "Firstly add participants and obstacles!" << endl;
            }
            else {
                cout << "\n--- Obstacle Race Begin!!! ---" << endl;
                ObstacleRace(participants, obstacles);

                bool betWon = false;
                for (auto* participant : participants) {
                    if (participant->GetName() == bet) {
                        betWon = true;
                        cout << "Your bet on " << bet << (betWon ? " won!" : " defeated.") << endl;
                        break;
                    }
                }
                if (!betWon) {
                    cout << "The participant for the bet did not participate in the competition." << endl;
                }
            }
            break;
        }
        case 5:
            DeleteParticipants(participants);
            DeleteObstacles(obstacles);
            break;
        default:
            cout << "wrong choice!" << endl;
        }

        system("pause");
    } while (choice != 5);
}

int main()
{
    srand(static_cast<unsigned>(time(0)));

    vector<Participant*> participants;
    vector<Obstacle*> obstacles;

    Menu(participants, obstacles);

    return 0;
}
