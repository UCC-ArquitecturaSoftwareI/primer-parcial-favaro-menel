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

void Car::aceleratex(int x) {
    speed.x += (aceleration.x * x);
    if (speed.x > speed_max) speed.x = speed_max;
    if (speed.x < -speed_max) speed.x = -speed_max;
}

void Car::aceleratey(int y) {
    speed.y += (aceleration.y * y);
    if (speed.y > speed_max) speed.y = speed_max;
    if (speed.y < -speed_max) speed.y = -speed_max;
}

float Car::getAngle() {
    return atan(speed.x / speed.y) * 180 / M_PI;
}
