//
// Created by Hannah Lee on 2018-11-10.
//

#include "Bicycle.hpp"

void Bicycle :: accelerate(int speed) {
    currentSpeed += speed;
    if(currentSpeed > topSpeed) {
        currentSpeed = topSpeed;
    }
}

ostream& operator<<(ostream os, const Bicycle & Bicycle) {
    os << dynamic_cast<const DerivedVehicle &>(Bicycle);
    return os;
}