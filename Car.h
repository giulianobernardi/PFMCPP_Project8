#pragma once
#include "Vehicle.h"

struct Car : public Vehicle
{
    Car(const std::string& s);
    // It seems that I have to define a copy constructor due to the virtual destructor of the inherited class?
    Car(const Car& c);
    ~Car() override;
    
    void closeWindows();

    void tryToEvade() override;

    void setSpeed(int s) override;
};
