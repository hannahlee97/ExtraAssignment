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

    Bicycle(string vName, int cSpeed, int tSpeed);

    void accelerate(int speed);

    friend ostream &operator<<(ostream &os, const Bicycle& Bicycle);


};

#endif //EXTRAASSIGNMENT_BICYCLE_HPP
