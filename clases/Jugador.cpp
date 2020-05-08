

#include "Jugador.h"

Player::Player(LoadData &ld, const std::string &name, const std::string &key) {
    ld.LoadCars(name, key);
    car_pos = ld.Posplayer(key);
    text2D = ld.getTexMan().search(key);
    speed = 1;
}


Texture2D &Player::getText2D() {
    return text2D;
}

Vector2 &Player::getCarPos() {
    return car_pos;
}

int Player::getSpeed() {
    return speed;
}

void Player::setCarPos(const Vector2 &carPos) {
    car_pos = carPos;
}

