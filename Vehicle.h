#pragma once

#include <string>
#include <iostream>

struct HighwayPatrol; // forward declaration

struct Vehicle
{
    Vehicle(const std::string& n);
    // Virtual constructor needed since there are other virtual methods and the class is inherited
    virtual ~Vehicle();
    
    virtual void setSpeed(int s);

    virtual void tryToEvade();
protected:
    int speed = 0;
    std::string name;

    friend HighwayPatrol;
};
