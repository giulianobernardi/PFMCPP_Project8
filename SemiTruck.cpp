// #include "SemiTruck.h"

// SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) {}
// // SemiTruck::~SemiTruck() {}

// void SemiTruck::lanesplitAndRace( int topSpeed )
// {
//     setSpeed(topSpeed);
//     std::cout << name << (topSpeed > 90 ? ": yeeehawwww" : ": zzzzzzzz") << std::endl;
// }
// void SemiTruck::tryToEvade()
// {
//     std::cout << name << ": you'll never take me alive, ya dirty coppers!" << std::endl;
//     setSpeed(120);
// }

// void SemiTruck::setSpeed(int s)
// {
//     if( s < 90 )
//     {
//         //ignore the request to lower the speed
//         std::cout<< name << ": uh, no.  i'm currently lane-splitting and racing" << std::endl;
//     }
//     else
//     {
//         Vehicle::setSpeed(s);
//     }
// }
