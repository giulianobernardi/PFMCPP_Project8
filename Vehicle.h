#pragma once

#include <string>
#include <iostream>

struct HighwayPatrol; // forward declaration

struct Vehicle
{
    Vehicle(const std::string& n) : name(n) { }
    // virtual ~Vehicle() = 0;
    
    virtual void setSpeed(int s);

    virtual void tryToEvade();
protected:
    int speed = 0;
    std::string name;

    friend HighwayPatrol;
};
