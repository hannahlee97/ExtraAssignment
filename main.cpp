#include <iostream>

#include "Bicycle.hpp"
#include "Car.hpp"

int main() {
    Car c("Fancy Car", 0);
    Bicycle b("Cool Bicycle", 0, 20);

    DerivedVehicle * CarPtr = &c;
    DerivedVehicle * BicyclePtr = &b;

    CarPtr -> accelerate(50);
    CarPtr -> decelerate(100);
    BicyclePtr -> accelerate(50);

    std::cout << c;
    std::cout << b;
}



































