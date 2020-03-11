#include "HighwayPatrol.h"
#include "Highway.h"
#include <iostream>

HighwayPatrol::HighwayPatrol() : Vehicle("HighwayPatrol")
{
}

HighwayPatrol::~HighwayPatrol()
{
}

void HighwayPatrol::scanHighway(Highway* h)
{
    std::cout << "\n\n";
    std::cout <<  name << ": scanning highway for speeders" << std::endl;

    for( int i = static_cast<int>(h->vehicles.size()); --i >= 0; )
    {
        auto* v = h->vehicles[static_cast<std::size_t>(i)];
        if( v->speed > h->speedLimit + 5 )
        {
            pullOver(v, v->speed > (h->speedLimit + 15), h );
            h->changeSpeed(50); //slow down for the highway patrol
        }
    }
}

void HighwayPatrol::pullOver( Vehicle* v, bool willArrest, Highway* h )
{
    std::cout << "\n\n";
    std::cout << "--------------------------------------" << std::endl;
    std::cout << name << ": vehicle is traveling " << v->speed - h->speedLimit << " miles per hour over the speed limit" << std::endl;
    if( willArrest )
    {
        std::string vehicleType;
        if( dynamic_cast<Car*>(v) != nullptr ){ vehicleType = "Car"; }
        if( dynamic_cast<Motorcycle*>(v) != nullptr ){vehicleType = "Motorcycle";}
        if( dynamic_cast<SemiTruck*>(v) != nullptr ){vehicleType = "Semitruck";}

        //print the vehicle type in this std::cout between "THE [" and "] PULL". 
        std::cout << name << ": YOU IN THE [ " << vehicleType << " ] PULL OVER AND SHOW YOUR HANDS" << std::endl;
        std::cout << "EVERYONE ELSE, SLOW DOWN!! \n\n\n";
        h->removeVehicle(v);
    }
}
