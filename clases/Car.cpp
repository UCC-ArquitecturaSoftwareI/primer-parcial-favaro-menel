//
// Created by martin on 21/3/20.
//

#include <string>
#include <utility>
#include "Car.h"


Car::Car() {
    text2D = text_man.LoadText("resources/car_red_3.png");
}

void Car::move_x(float d) {

}

void Car::move_y(float d) {

}

float Car::getpos_y() {
    return car_pos.y;
}

float Car::getpos_x() {
    return car_pos.x;
}

void Car::setpos_x(float x) {
    car_pos.x = x;
}

void Car::setpos_y(float y) {
    car_pos.y = y;
}
