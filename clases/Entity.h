//#include "../cmake-build-debug/_deps/raylib-src/src/raylib.h"

#ifndef RAYLIBTEMPLATE_ENTITY_H
#define RAYLIBTEMPLATE_ENTITY_H


class Entity {
protected:
    Texture2D text2D;
    Vector2 car_pos;
public:
    virtual Vector2 getpos() = 0;
};

#endif //RAYLIBTEMPLATE_ENTITY_H