#include "Car.h"
#include <cmath>

float Car::getRotation(){
    return rotation;
}
void Car::move(float d) {
    car_pos.x += d * std::sin(-rotation * M_PI / 180);
    car_pos.y += d * std::cos(-rotation * M_PI / 180);
}

void Car::rotate(float r) {
    rotation += r;
}

void Car::acelerate(float a) {
    speed += (aceleration * a);
    if (speed > speed_max) speed = speed_max;
    if (speed < -speed_max) speed = -speed_max;
}
