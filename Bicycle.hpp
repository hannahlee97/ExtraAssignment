//
// Created by Hannah Lee on 2018-11-10.
//

#ifndef EXTRAASSIGNMENT_BICYCLE_HPP
#define EXTRAASSIGNMENT_BICYCLE_HPP

#include "DerivedVehicle.hpp"

class Bicycle : public DerivedVehicle {
    int topSpeed;

public:
    Bicycle() = default;

    // Not sure about line below
    Bicycle(string vName, int cSpeed, int tSpeed);
    /*::vehicleName{vName}, currentSpeed{cSpeed}, topSpeed{tSpeed}; */

    void accelerate(int speed);

    friend ostream &operator<<(ostream &os, const Bicycle& Bicycle);


};

#endif //EXTRAASSIGNMENT_BICYCLE_HPP
