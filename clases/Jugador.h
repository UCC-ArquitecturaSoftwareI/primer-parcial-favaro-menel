/**
 * @title       Player class
 * @file        Jugador.h
 * @version     1.0
 * @date        15/05/2020
 * @author      Angelo Menel
 * @author      Juan Cruz Favaro
 * @author      Emanuel Chiletti
 */

#ifndef RAYLIBTEMPLATE_JUGADOR_H
#define RAYLIBTEMPLATE_JUGADOR_H

#include "Car.h"
/**
 * @class Player
 * @brief Inherited from Car. Used for the car's player.
 */
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
