//#include "../cmake-build-debug/_deps/raylib-src/src/raylib.h"

#ifndef RAYLIBTEMPLATE_ENTITY_H
#define RAYLIBTEMPLATE_ENTITY_H
#endif //RAYLIBTEMPLATE_ENTITY_H

#include "LoadData.h"


class Entity {
protected:
    Texture2D text2D;
    Vector2 car_pos;
    LoadData ld;
public:

    virtual Vector2 getpos() = 0;

    virtual LoadData &getLd() = 0;
};