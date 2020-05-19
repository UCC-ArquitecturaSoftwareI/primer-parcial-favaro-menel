//#include "../cmake-build-debug/_deps/raylib-src/src/raylib.h"

#ifndef RAYLIBTEMPLATE_ENTITY_H
#define RAYLIBTEMPLATE_ENTITY_H

#include <vector>

class Entity {
protected:
    Texture2D text2D;
    Vector2 car_pos;
public:

    virtual Texture2D &getText2D() = 0;

    virtual Vector2 &getCarPos() = 0;

    virtual void setCarPos(const Vector2 &carPos) = 0;

    virtual void move(float d) = 0;
    virtual void rotate(float r) =0;
};

#endif //RAYLIBTEMPLATE_ENTITY_H