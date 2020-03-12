#include "SemiTruck.h"

#include <iostream>

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) {}

void SemiTruck::closeWindows()
{
    setSpeed(70);
    std::cout << name << ": closing the windows!" << std::endl;
}

void SemiTruck::breakAndPullOver()
{
    setSpeed(0);
    std::cout << name << ": hello officer, this is a heavy truck; it takes time to stop it!" << std::endl;
}

void SemiTruck::tryToEvade()
{
    setSpeed(0);
    std::cout << name << ": hello officer, what seems to be the problem?" << std::endl;
}

void SemiTruck::setSpeed(int s)
{
    Vehicle::setSpeed(s);
}
