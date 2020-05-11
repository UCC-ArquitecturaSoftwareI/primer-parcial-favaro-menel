

#include "Jugador.h"

#include <cmath>

Player::Player(LoadData &ld, const std::string &name, const std::string &key) {
    ld.LoadCars(name, key);
    car_pos = ld.Posplayer(key);
    text2D = ld.getTexMan().search(key);
    speed = {0,0};
    height = text2D.height;
    width = text2D.width;
}


Texture2D &Player::getText2D() {
    return text2D;
}

Vector2 &Player::getCarPos() {
    return car_pos;
}

Vector2 Player::getSpeed() {
    return speed;
}

void Player::setCarPos(const Vector2 &carPos) {
    car_pos = carPos;
}

float Player::getHeight() {
    return height;
}

float Player::getWidth() {
    return width;
}

