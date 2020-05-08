//#include "../cmake-build-debug/_deps/raylib-src/src/raylib.h"

#ifndef RAYLIBTEMPLATE_ENTITY_H
#define RAYLIBTEMPLATE_ENTITY_H
#include <vector>

class Entity {
protected:
    std::vector<Texture2D> text2D;
    std::vector<Vector2> car_pos;
public:
    virtual std::vector<Vector2> getpos() = 0;
};

#endif //RAYLIBTEMPLATE_ENTITY_H