/**
 * @title       Enemy class
 * @file        Enemies.h
 * @version     1.0
 * @date        15/05/2020
 * @author      Angelo Menel
 * @author      Juan Cruz Favaro
 * @author      Emanuel Chiletti
 */
#ifndef RAYLIBTEMPLATE_ENEMIES_H
#define RAYLIBTEMPLATE_ENEMIES_H

#include "Car.h"
/**
 * @class Enemies
 * @brief Inherited from Car. Used for the enemies cars.
 */
class Enemies : public Car {
public:
    Enemies(LoadData &ld, const std::string &name, const std::string &key,float sp_max,float acel);

    void setCarPos(const Vector2 &carPos) override;

    Texture2D &getText2D() override;

    Vector2 &getCarPos() override;

    float getSpeed() override;

    float getHeight() override;

    float getWidth() override;

    float getAceleration() override;
};

#endif //RAYLIBTEMPLATE_ENEMIES_H
