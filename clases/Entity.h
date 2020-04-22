#include "../cmake-build-debug/_deps/raylib-src/src/raylib.h"

#ifndef RAYLIBTEMPLATE_ENTITY_H
#define RAYLIBTEMPLATE_ENTITY_H
#endif //RAYLIBTEMPLATE_ENTITY_H

#include "TextureManager.h"

class Entity {
protected:
    Texture2D text2D;
    TextureManager text_man;
    Vector2 car_pos;
public:
    virtual void move_x(float d) = 0;

    virtual void move_y(float d) = 0;

    virtual float getpos_x() = 0;

    virtual float getpos_y() = 0;

    virtual void setpos_x(float x) = 0;

    virtual void setpos_y(float y) = 0;
};