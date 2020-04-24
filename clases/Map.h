#ifndef RAYLIBTEMPLATE_MAP_H
#define RAYLIBTEMPLATE_MAP_H
#endif //RAYLIBTEMPLATE_MAP_H

#include <string>
#include <raylib.h>
#include "LoadData.h"

class Map {
    LoadData ld;
    std::vector<Rectangle> tile_rec;
    std::vector<Vector2> position;
public:
    Map();

    LoadData &getLd();

    std::vector<Rectangle> &getTileRec();

    std::vector<Vector2> &getPosition();
};