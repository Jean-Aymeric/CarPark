//
// Created by JAD on 14/03/2023.
//

#ifndef UNTITLED49_CARPARK_H
#define UNTITLED49_CARPARK_H

#include "car.h"

typedef struct{
    Car* cars;
    int nbMaxCars;
    int nbCars;
}CarPark;

CarPark* createCarPark(int nbMaxCars);
void addCar(CarPark* carPark,Car* car);

#endif //UNTITLED49_CARPARK_H
