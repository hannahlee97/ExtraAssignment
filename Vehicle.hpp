
class Vehicle {
public:
    virtual void accelerate(int speed) = 0;
    virtual void decelerate(int speed) = 0;
    virtual~ Vehicle() = default;
};
