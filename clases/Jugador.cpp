

#include "Jugador.h"

#include <cmath>

Player::Player(LoadData &ld, const std::string &name, const std::string &key, float sp_max, float acel) {
    ld.LoadCars(name, key);
    car_pos = ld.Posplayer(key);
    text2D = ld.getTexMan().search(key);
    speed = 0;
    height = text2D.height;
    width = text2D.width;
    speed_max = sp_max;
    aceleration = acel;
    rotation = 0;
}


Texture2D &Player::getText2D() {
    return text2D;
}

Vector2 &Player::getCarPos() {
    return car_pos;
}

float Player::getSpeed() {
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

float Player::getAceleration() {
    return aceleration;
}

