#ifndef RAYLIBTEMPLATE_JUGADOR_H
#define RAYLIBTEMPLATE_JUGADOR_H

#include "Car.h"

class Player: public Car{
public:
    Player(LoadData &ld);

    void movement() override;
};
#endif //RAYLIBTEMPLATE_JUGADOR_H
