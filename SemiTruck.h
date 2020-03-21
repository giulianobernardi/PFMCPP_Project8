#pragma once
#include "Vehicle.h"

struct SemiTruck : public Vehicle
{
    SemiTruck(const std::string& n);
    
    void closeWindows();

    void breakAndPullOver();

    void tryToEvade() override;
};
