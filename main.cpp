#include <iostream>

#include "Bicycle.hpp"
#include "Car.hpp"

// #19

/* class Vehicle {
public:
    virtual void accelerate(int speed) = 0;
    virtual void decelerate(int speed) = 0;
    virtual~ Vehicle();
};

// #20

DerivedVehicle::Vehicle {
protected:
    string vehicleName;
    int currentSpeed;
public:
    inline int getCurrentSpeed() {return currentSpeed}
    inline void setCurrentSpeed(int a) {currentSpeed = a;}
    inline string getVehicleName() {return vehicleName;}
    inline void setVehicleName(string a) {vehicleName = a;}

    DerivedVehicle(string vName, int speed)::vehicleName{vName}, currentSpeed{speed};
    void accelerate(int speed) override {currentSpeed += speed;}
    void decelerate(int speed) override {currentSpeed -= speed;
    if(currentSpeed(0)) {
        currentSpeed = 0;
    }
    }
};

// #21

class Car::DerivedVehicle {
    car() = default;
    car(string vName, int speed)::DerivedVehicle(vName, speed);
};

// #22

ostream& operator<<(ostream os, const Car& car) {
    os << Car.vehicleName << "," << Car.currentSpeed;
    return os;
}

// #23

class Bicycle::DerivedVehicle {
    int topSpeed;

public:
    Bicycle() = default;

    // Not sure about line below
    Bicycle(string vName, int cSpeed, int tSpeed)::vehicleName{vName}, currentSpeed{cSpeed}, topSpeed{tSpeed};

    void accelerate(int speed) {
        currentSpeed += speed;
        if(currentSpeed > topSpeed) {
            currentSpeed = topSpeed;
        }
    }


};

// #24

ostream& operator<<(ostream os, const Bicycle & Bicycle) {
    os << Bicycle.vehicleName << "," << Bicycle.currentSpeed << "," << Bicycle.topSpeed;
    return os;
} */

// #25
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



































