

#include "Enemies.h"

Enemies::Enemies(LoadData &ld, const std::string &name, const std::string &key) {
    ld.LoadCars(name, key);
    car_pos = ld.Posenemy(key);
    text2D = ld.getTexMan().search(key);
    speed = 2;
}

Texture2D &Enemies::getText2D() {
    return text2D;
}

Vector2 &Enemies::getCarPos() {
    return car_pos;
}

int Enemies::getSpeed() {
    return speed;
}

void Enemies::setCarPos(const Vector2 &carPos) {
    car_pos = carPos;
}

