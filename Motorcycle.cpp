#include "Motorcycle.h"

Motorcycle::Motorcycle(const std::string& n) : Vehicle(n) {}
Motorcycle::Motorcycle(const Motorcycle& m) : Vehicle(m.name) {}
Motorcycle::~Motorcycle() {}

void Motorcycle::lanesplitAndRace( int topSpeed )
{
    setSpeed(topSpeed);
    std::cout << name << (topSpeed > 90 ? ": yeeehawwww" : ": zzzzzzzz") << std::endl;
}
void Motorcycle::tryToEvade()
{
    std::cout << name << ": you'll never take me alive, ya dirty coppers!" << std::endl;
    setSpeed(120);
}

void Motorcycle::setSpeed(int s)
{
    if( s < 90 )
    {
        //ignore the request to lower the speed
        std::cout << "\n";
        std::cout<< name << ": uh, no. I'm currently lane-splitting and racing" << std::endl;
    }
    else
    {
        Vehicle::setSpeed(s);
    }
}
