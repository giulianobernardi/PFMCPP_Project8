#pragma once

#include "Vehicle.h"

struct SemiTruck : public Vehicle
{
    SemiTruck(const std::string& n);
    SemiTruck(const SemiTruck& s);
    ~SemiTruck() override;
    
    void closeWindows();

    void breakAndPullOver();
};
