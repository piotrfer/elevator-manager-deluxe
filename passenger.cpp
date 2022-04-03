#include "passenger.h"

Passenger::Passenger(int startingFloor, int targetFloor)
{
    this->startingFloor = startingFloor;
    this->targetFloor = targetFloor;
    this->state = 'WAITING';
}
