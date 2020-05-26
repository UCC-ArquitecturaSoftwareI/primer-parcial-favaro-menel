#ifndef RAYLIBTEMPLATE_JUGADOR_H
#define RAYLIBTEMPLATE_JUGADOR_H

#include "Car.h"

class Player : public Car {
public:
    Player(LoadData &ld, const std::string &name, const std::string &key, float sp_max, float acel);

    void setCarPos(const Vector2 &carPos) override;

    Texture2D &getText2D() override;

    Vector2 &getCarPos() override;

    float getSpeed() override;

    float getHeight() override;

    float getWidth() override;

    float getAceleration() override;

    void isCollidingcars(Car &cars);

};

#endif //RAYLIBTEMPLATE_JUGADOR_H
