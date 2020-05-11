#include "Car.h"

void Car::move() {
    car_pos.x += speed.x;
    car_pos.y += speed.y;
    if (speed.x > 0) {
        speed.x -= 0.01;
    }
    if (speed.x < 0) {
        speed.x += 0.01;
    }
    if (speed.y > 0) {
        speed.y -= 0.01;
    }
    if (speed.y < 0) {
        speed.y += 0.01;
    }
}

void Car::aceleratex(float x) {
    speed.x += x;
    if (speed.x > SPEED_MAX) speed.x = SPEED_MAX;
    if (speed.x < -SPEED_MAX) speed.x = -SPEED_MAX;
}

void Car::aceleratey(float y) {
    speed.y += y;
    if (speed.y > SPEED_MAX) speed.y = SPEED_MAX;
    if (speed.y < -SPEED_MAX) speed.x = -SPEED_MAX;
}

float Car::getAngle() {
    return atan(speed.x/speed.y)*180/M_PI;
}
