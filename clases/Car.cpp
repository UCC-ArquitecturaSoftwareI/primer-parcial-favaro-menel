//
// Created by martin on 21/3/20.
//

#include <string>
#include "Car.h"

Car::Car(std::string text, const Vector2 &carPos) : car_pos(carPos) {
    car = LoadTexture(text.c_str());
}

void Car::draw() {
    DrawTextureEx(car, {car_pos.x - car.width / 2, car_pos.y - car.height / 2}, 0, 0.3, WHITE);
}

void Car::move_x(float d) {
    car_pos.x += d;
}

void Car::move_y(float d) {
    car_pos.y += d;
}
