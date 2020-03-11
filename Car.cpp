#include "Car.h"

#include <iostream>

Car::Car(const std::string& n) : Vehicle(n) {}
Car::Car(const Car& c) : Vehicle(c.name) {}
Car::~Car() {}

void Car::closeWindows()
{
    setSpeed(70);
    std::cout << name << ": closing the windows!" << std::endl;
}

void Car::tryToEvade()
{
    setSpeed(0);
    std::cout << name << ": hello officer, what seems to be the problem?" << std::endl;
}

void Car::setSpeed(int s)
{
    if( s < 65 )
    {
        //ignore the request to lower the speed
        std::cout << "\n";
        std::cout<< name << ": you can't change the limit. I'd like to speak with your boss!" << std::endl;
    }
    else
    {
        Vehicle::setSpeed(s);
    }
}
