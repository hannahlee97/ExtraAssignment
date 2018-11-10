//
// Created by Hannah Lee on 2018-11-10.
//

#include "Car.hpp"

using namespace std;

ostream& operator<<(ostream &os, const Car& car) {
   os << dynamic_cast<const DerivedVehicle &>(car);

    return os;
}
