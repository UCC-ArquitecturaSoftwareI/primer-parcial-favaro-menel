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

    void LoadCars(const std::string& file,const std::string& key);

    Vector2 Posplayer(const std::string& name);

    Vector2 Posenemy(const std::string& name);

    Rectangle Loadline();

    tson::Map &getMap();

    tson::Tileset *getMapTileset();

    TextureManager getTexMan();
};

#endif //RAYLIBTEMPLATE_LOADDATA_H