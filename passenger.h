#ifndef PASSENGER_H
#define PASSENGER_H

#include <string>

using namespace std;

class Passenger
{
private:
    int startingFloor;
    int targetFloor;
    string state;
public:
    Passenger(int startingFloor, int targetFloor);
};

#endif // PASSENGER_H
