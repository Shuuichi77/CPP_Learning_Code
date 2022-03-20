#pragma once

#include "Car.h"
#include "Vehicle.h"

#include <iostream>

class FlyingCar : public Car
{
public:
    FlyingCar(const Driver& driver, unsigned int speed)
        : Car { driver, speed }
        , _flying_speed { 10u * speed }
    {}

    unsigned int drive() const override
    {
        if (_driver.has_air_licence())
        {
            std::cout << "Sweeesh!" << std::endl;
            return _flying_speed;
        }

        else
        {
            std::cout << "No air licence detected..." << std::endl;
            return Car::drive();
        }
    }

private:
    unsigned int _speed = 0;
    unsigned int _flying_speed = 0;
};
