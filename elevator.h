#ifndef ELEVATOR_H
#define ELEVATOR_H

#include <string>

using namespace std;

class Elevator
{
private:
    int startFloor;
    int endFloor;
    int capacity;
    int floorDelay;
    int speed;
    int currentFloor;
    string status;
    int nextStops[];
    // Passenger passengers[];
public:
    Elevator(int startFloor, int endFloor, int capacity, int floorDelay, int currentFloor);
    void addStop(int floor);
};

#endif // ELEVATOR_H
