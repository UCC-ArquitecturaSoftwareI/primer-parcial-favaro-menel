/**
 * @title       Loaddata class
 * @file        LoadData.h
 * @version     1.0
 * @date        10/04/2020
 * @author      Angelo Menel
 * @author      Juan Cruz Favaro
 * @author      Emanuel Chiletti
 */
#ifndef RAYLIBTEMPLATE_LOADDATA_H
#define RAYLIBTEMPLATE_LOADDATA_H

#include "../Libs/tileson.hpp"
#include "TextureManager.h"
/**
 * @class LoadData
 * @brief Loads all the data's cars and map of the .json
 */
class LoadData {
private:
    tson::Map map;                  /** tson::Map value. */
    TextureManager tex_man;         /**TextureManager value. */
    tson::Tileset *map_tileset;     /**tson::Tileset value.*/
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