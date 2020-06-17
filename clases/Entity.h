/**
 * @title       Entity class
 * @file        Entity.h
 * @version     1.0
 * @date        21/04/2020
 * @author      Angelo Menel
 * @author      Juan Cruz Favaro
 * @author      Emanuel Chiletti
 */
#ifndef RAYLIBTEMPLATE_ENTITY_H
#define RAYLIBTEMPLATE_ENTITY_H

#include <vector>
/**
 * @class Entity
 * @brief Abstract class which is the father of Car class.
 */
class Entity {
protected:
    Texture2D text2D;       /**Texture2D value. Car's texture*/
    Vector2 car_pos;        /**Vector2 value. Car's position*/
public:

    virtual Texture2D &getText2D() = 0;

    virtual Vector2 &getCarPos() = 0;

    virtual void setCarPos(const Vector2 &carPos) = 0;

    virtual void move(float d) = 0;

    virtual void rotate(float r) =0;
};

#endif //RAYLIBTEMPLATE_ENTITY_H