#include "elevator.h"
#include <string>

Elevator::Elevator(int startFloor, int endFloor, int capacity, int floorDelay, int currentFloor)
{
    this->startFloor = startFloor;
    this->endFloor = endFloor;
    this->capacity = capacity;
    this->floorDelay = floorDelay;
    this->status = "WAITING";
}
