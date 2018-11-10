//
// Created by Hannah Lee on 2018-11-10.
//

#ifndef EXTRAASSIGNMENT_DERIVEDVEHICLE_HPP
#define EXTRAASSIGNMENT_DERIVEDVEHICLE_HPP

#include <string>
#include <iostream>

#include "Vehicle.hpp"

using namespace std;

class DerivedVehicle : public Vehicle {

protected:
    string vehicleName;
    int currentSpeed;

public:
    inline int getCurrentSpeed() { return currentSpeed; }

    inline void setCurrentSpeed(int a) { currentSpeed = a; }

    inline string getVehicleName() { return vehicleName; }

    inline void setVehicleName(string a) { vehicleName = a; }

    DerivedVehicle(string vName, int speed);

    void accelerate(int speed) override;

    void decelerate(int speed) override;

    friend ostream &operator<<(ostream &os, const DerivedVehicle& vehicle);
};

#endif //EXTRAASSIGNMENT_DERIVEDVEHICLE_HPP
