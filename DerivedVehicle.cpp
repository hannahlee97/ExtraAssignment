//
// Created by Hannah Lee on 2018-11-10.
//

#include "DerivedVehicle.hpp"

void DerivedVehicle::accelerate(int speed) { currentSpeed += speed; }

void DerivedVehicle::decelerate(int speed) {
    currentSpeed -= speed;
    if (currentSpeed == 0) {
        currentSpeed = 0;
    }
}

 ostream &operator<<(ostream &os, const DerivedVehicle& vehicle) {
    os << "Vehicle Name: " << vehicle.vehicleName << endl;
    os << "Current Speed: " << vehicle.currentSpeed << endl;

    return os;
}