

#include "Enemies.h"

Enemies::Enemies(LoadData &ld) {
    car_pos = ld.LoadEnemies();
    for (int i = 0; i < car_pos.size(); i++) {
        text2D[i] = ld.getTexMan().search("enemy");
    }
}

void Enemies::movement() {

}

