#include "Highway.h"

#include <cassert>

void Highway::changeSpeed(int newSpeed)
{
    speedLimit = newSpeed;
    for( auto* vehicle : vehicles )
    {
        vehicle->setSpeed(speedLimit);
    }
}

void Highway::addVehicleInternal(Vehicle* v)
{
    /*
    depending on the derived type, call the member function that doesn't evade the cops. 
    */
    if( auto* motorcycle = dynamic_cast<Motorcycle*>(v) )
    {
        // std::cout << "This is a motorcycle";
        motorcycle->lanesplitAndRace(100);
    }
    if( auto* car = dynamic_cast<Car*>(v) )
    {
        // std::cout << "This is a car";
        car->closeWindows();
    }
    if( auto* semitruck = dynamic_cast<SemiTruck*>(v) )
    {
        // std::cout << "This is a semitruck";
        semitruck->setSpeed(70);
    }
}

void Highway::removeVehicleInternal(Vehicle* v)
{
    /*
    depending on the derived type, call the member function that tries to evade the cops. 

    trucks pull over, but cars and bikes try to evade!!
    */
    if( auto* motorcycle = dynamic_cast<Motorcycle*>(v) )
    {
        // std::cout << "This is a motorcycle";
        motorcycle->tryToEvade();
    }
    if( auto* car = dynamic_cast<Car*>(v) )
    {
        // std::cout << "This is a car";
        car->tryToEvade();
    }
    if( auto* semitruck = dynamic_cast<SemiTruck*>(v) )
    {
        // std::cout << "This is a semitruck";
        semitruck->breakAndPullOver();
    }
}

void Highway::addVehicle(Vehicle* v)
{
    vehicles.push_back(v);
    addVehicleInternal(v);
}
void Highway::removeVehicle(Vehicle* v)
{
    vehicles.erase(std::remove(vehicles.begin(), 
                               vehicles.end(), 
                               v), 
                   vehicles.end());
    removeVehicleInternal(v);
}
