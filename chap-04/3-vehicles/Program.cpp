#include "Car.h"
#include "Scooter.h"
#include "Vehicle.h"
#include "FlyingCar.h"

#include <iostream>

int main()
{
    // Driver     car_driver;
    // Car        car { car_driver, 60u };
    // const auto distance_in_car = car.drive();
    // std::cout << distance_in_car << " km in a car." << std::endl;
    
    Driver     flying_car_driver;
    FlyingCar flying_car { flying_car_driver, 60u };
    const auto distance1 = flying_car.drive();
    std::cout << distance1 << " km in a flying car." << std::endl;

    flying_car_driver.pass_car_licence_exam();
    const auto distance2 = flying_car.drive();
    std::cout << distance2 << " km in a flying car." << std::endl;

    flying_car_driver.pass_air_licence_exam();
    const auto distance3 = flying_car.drive();
    std::cout << distance3 << " km in a flying car." << std::endl;

    Vehicle vehicle;

    // Driver     mini_gangster;
    // Scooter    scooter { mini_gangster, 180u };
    // const auto distance_in_scooter = scooter.drive();
    // std::cout << distance_in_scooter << " km with a scooter." << std::endl;

    return 0;
}