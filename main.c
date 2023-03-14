#include "car.h"
#include "carpark.h"
int main() {
    Car *K2000= createCar("KIT","Pontiac",450000);
    displayCar(K2000);
    CarPark* monParking=createCarPark(3);
    addCar(monParking,K2000);
    return 0;
}
