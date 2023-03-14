//
// Created by JAD on 14/03/2023.
//

#include "car.h"
Car* createCar(char idCar[IDCARSIZE],char brand[BRANDSIZE],int kilometersCounter){
    Car* car=(Car*)malloc(sizeof(Car));
    initializeCar(car,idCar,brand,kilometersCounter);
    return car;
}

void initializeCar(Car* car,const char idCar[IDCARSIZE],const char brand[BRANDSIZE],int kilometersCounter){
    strcpy(car->brand,brand);
    strcpy(car->idCar,idCar);
    car->kilometersCounter=kilometersCounter;
    car->partialKilometersCounter=0;
}
void displayCar(Car* car){
    printf("%s %s %d %d",car->brand,car->idCar,car->kilometersCounter,car->partialKilometersCounter);
}