//
// Created by JAD on 14/03/2023.
//

#include "carpark.h"

CarPark *createCarPark(int nbMaxCars) {
    CarPark *carPark = (CarPark *) malloc(sizeof(CarPark));
    carPark->cars = (Car *) malloc(nbMaxCars * sizeof(Car));
    carPark->nbMaxCars = nbMaxCars;
    carPark->nbCars = 0;
    return carPark;
}

void addCar(CarPark *carPark, Car *car) {
    if (carPark->nbCars < carPark->nbMaxCars) {
        carPark->cars[carPark->nbCars++] = *car;
    }
}