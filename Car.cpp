//
// Created by Hannah Lee on 2018-11-10.
//

#include "Car.hpp"

using namespace std;

/* ostream &operator<<(ostream &os, const Car &car) {
    os << car.vehicleName ;
    os << ", " << car.currentSpeed;
    return os;
} */

ostream& operator<<(ostream &os, const Car& car) {
   /*  os << "Vehicle Name: " << car.vehicleName << endl;
    os << "Current Speed: " << car.currentSpeed << endl; */
   os << dynamic_cast<const DerivedVehicle &>(car);

    return os;
}
