//
// Created by Hannah Lee on 2018-11-10.
//

#ifndef EXTRAASSIGNMENT_CAR_HPP
#define EXTRAASSIGNMENT_CAR_HPP

#include <iostream>
#include <utility>

#include "DerivedVehicle.hpp"

class Car : public DerivedVehicle {
public:
    Car() = default;

    Car(string vName, int speed);

    friend ostream &operator<<(ostream &os, const Car& car);
};


#endif //EXTRAASSIGNMENT_CAR_HPP
