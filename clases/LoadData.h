#ifndef RAYLIBTEMPLATE_LOADDATA_H
#define RAYLIBTEMPLATE_LOADDATA_H
#endif //RAYLIBTEMPLATE_LOADDATA_H

#include "../Libs/tileson.hpp"
#include "TextureManager.h"


class LoadData {
private:
    Texture2D text2D;
    tson::Map map;
    TextureManager tex_man;
    tson::Tileset *map_tileset;
public:
    LoadData();

    void LoadMap(std::string file);

    Vector2 LoadPlayer();

    std::vector<Vector2> LoadEnemies();

    tson::Map &getMap();

    tson::Tileset *getMapTileset();

    TextureManager getTexMan();
};