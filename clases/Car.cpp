#include "Car.h"

Car::Car(LoadData &ld) {
    car_pos = ld.LoadPlayer();
    text2D = ld.getTexMan().search("enemy");
}

Vector2 Car::getpos() {
    return car_pos;
}







