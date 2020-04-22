#ifndef RAYLIBTEMPLATE_LOADDATA_H
#define RAYLIBTEMPLATE_LOADDATA_H
#endif //RAYLIBTEMPLATE_LOADDATA_H

#include "../Libs/tileson.hpp"
#include "TextureManager.h"
#include "Car.h"

class LoadData {
private:
    Texture2D text2D;
    tson::Map map;
    TextureManager *tex_man;
    tson::Tileset *map_tileset;
    Car player;
public:
    LoadData();
    void LoadMap(std::string file);
    void LoadPlayer();
};