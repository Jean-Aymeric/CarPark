//
// Created by JAD on 14/03/2023.
//

#ifndef UNTITLED49_CAR_H
#define UNTITLED49_CAR_H
#define IDCARSIZE 12
#define BRANDSIZE 100
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct {
    int kilometersCounter;
    int partialKilometersCounter;
    char idCar[IDCARSIZE];
    char brand[BRANDSIZE];
}Car;

Car* createCar(char idCar[IDCARSIZE],char brand[BRANDSIZE],int kilometersCounter);
void initializeCar(Car* car,const char idCar[IDCARSIZE],const char brand[BRANDSIZE],int kilometersCounter);
void displayCar(Car* car);

#endif //UNTITLED49_CAR_H
