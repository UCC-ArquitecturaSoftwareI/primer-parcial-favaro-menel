

#include "Enemies.h"

Enemies::Enemies(LoadData &ld, const std::string &name, const std::string &key, float sp_max, float acel) {
    ld.LoadCars(name, key);
    car_pos = ld.Posenemy(key);
    text2D = ld.getTexMan().search(key);
    speed = 1;
    height = text2D.height;
    width = text2D.width;
    speed_max = sp_max;
    aceleration = acel;
    rotation = 0;
}

Texture2D &Enemies::getText2D() {
    return text2D;
}

Vector2 &Enemies::getCarPos() {
    return car_pos;
}

float Enemies::getSpeed() {
    return speed;
}

void Enemies::setCarPos(const Vector2 &carPos) {
    car_pos = carPos;
}

float Enemies::getHeight() {
    return height;
}

float Enemies::getWidth() {
    return width;
}

float Enemies::getAceleration() {
    return aceleration;
}

