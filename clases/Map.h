/**
 * @title       Map class
 * @file        Map.h
 * @version     1.0
 * @date        11/04/2020
 * @author      Angelo Menel
 * @author      Juan Cruz Favaro
 * @author      Emanuel Chiletti
 */
#ifndef RAYLIBTEMPLATE_MAP_H
#define RAYLIBTEMPLATE_MAP_H

#include <string>
#include <raylib.h>
#include "LoadData.h"
/**
 * @class Map
 * @brief Loads the tiles of the map, using the .json
 */
class Map {
    LoadData *ld;                       /**LoadData value. Pointer to a LoadData object*/
    std::vector<Rectangle> tile_rec;    /**std::vector<Rectangle> value. Vector of tile's rectangle*/
    std::vector<Vector2> position;      /**std::vector<Vector2> value. Vector of position, type: Vector2*/
    Rectangle rectangle;                /**Rectangle value. Rectangle of the map*/
public:
    Map();

    Rectangle &getRectangle();

    std::vector<Rectangle> &getTileRec();

    std::vector<Vector2> &getPosition();

    LoadData *getLd() const;

};

#endif //RAYLIBTEMPLATE_MAP_H