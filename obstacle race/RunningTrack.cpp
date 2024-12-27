#include "RunningTrack.h"

RunningTrack::RunningTrack()
{
	length = static_cast<double>(rand() % 1000 + 50) + (rand() % 100) / 100.0; 
}

RunningTrack::RunningTrack(double l) : length(l){}

bool RunningTrack::Overcome(const Participant& participant) const 
{
    participant.Run();
    if (participant.GetRunDistance() >= length) 
    {
        cout << "Participant " << participant.GetName() << " overcame the running track in length " << length << " meters." << endl;
        return true;
    }
    else 
    {
        cout << "Participant " << participant.GetName() << " did not overcome the running track in length " << length << " meters." << endl;
        return false;
    }
}
