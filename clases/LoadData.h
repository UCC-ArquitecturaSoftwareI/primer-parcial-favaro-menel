#ifndef RAYLIBTEMPLATE_LOADDATA_H
#define RAYLIBTEMPLATE_LOADDATA_H

#include "../Libs/tileson.hpp"
#include "TextureManager.h"

class LoadData {
private:
    tson::Map map;
    TextureManager tex_man;
    tson::Tileset *map_tileset;
public:
    LoadData(std::string file);

    Vector2 LoadPlayer();

    std::vector<Vector2> LoadEnemies();

    Rectangle Loadline();

    tson::Map &getMap();

    tson::Tileset *getMapTileset();

    TextureManager getTexMan();
};

#endif //RAYLIBTEMPLATE_LOADDATA_H