#include "../cmake-build-debug/_deps/raylib-src/src/raylib.h"

#ifndef RAYLIBTEMPLATE_ENTITY_H
#define RAYLIBTEMPLATE_ENTITY_H
#endif //RAYLIBTEMPLATE_ENTITY_H

#include "TextureManager.h"

class Entity {
protected:
    Texture2D text2D;
    Vector2 car_pos;
public:
    virtual void move_x(float d) = 0;

    virtual void move_y(float d) = 0;

    virtual Vector2 getpos() = 0;

    virtual void setpos_x(float x) = 0;

    virtual void setpos_y(float y) = 0;
};