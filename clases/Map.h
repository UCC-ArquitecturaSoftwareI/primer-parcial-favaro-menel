#ifndef RAYLIBTEMPLATE_MAP_H
#define RAYLIBTEMPLATE_MAP_H
#endif //RAYLIBTEMPLATE_MAP_H

#include <string>
#include <raylib.h>
#include "../Libs/tileson.hpp"

class Map {
    tson::Map map;
    Texture2D map_tex;
    tson::Tileset *map_tileset;
public:
    Map(std::string file);

};