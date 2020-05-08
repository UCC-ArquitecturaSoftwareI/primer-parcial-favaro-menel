

#include "Jugador.h"

Player::Player(LoadData &ld) {
    car_pos[0] = ld.LoadPlayer();
    text2D[0] = ld.getTexMan().search("player");
}

void Player::movement() {

}

