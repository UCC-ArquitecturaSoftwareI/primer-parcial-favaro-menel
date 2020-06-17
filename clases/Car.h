/**
 * @title       Car class
 * @file        Car.h
 * @version     1.0
 * @date        21/05/2020
 * @author      Angelo Menel
 * @author      Juan Cruz Favaro
 * @author      Emanuel Chiletti
 */
#ifndef RAYLIBTEMPLATE_CAR_H
#define RAYLIBTEMPLATE_CAR_H
//#define SPEED_MAX 1

#include <raylib.h>
#include <string>
#include "Entity.h"
#include "LoadData.h"
/**
 * @class Car
 * @brief Inherited from Entity. Father of Enemies and Player classes.
 *        It has all the basics information of the car's game.
 */
class Car : public Entity {
protected:
    float speed;            /**float value. Car's speed*/
    float height;           /**float value. Texture's height*/
    float width;            /**float value*. Texture's widht*/
    float speed_max;        /**float vaule. Car's maximum speed*/
    float aceleration;      /**float value. Car's aceleration*/
    float rotation;         /**float value. Car's rotation*/
public:
    virtual float getSpeed() = 0;

    virtual float getHeight() = 0;

    virtual float getWidth() = 0;

    virtual float getAceleration() = 0;

    float getRotation();

    void acelerate(float a);

    void move(float d) override;

    void rotate(float r) override;

    void isCollidingcars(Car &cars);

};


#endif //RAYLIBTEMPLATE_CAR_H
