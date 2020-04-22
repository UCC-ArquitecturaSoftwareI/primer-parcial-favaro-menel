//
// Created by Euge on 17/04/2020.
//
#include <iostream>
#include "Map.h"

Map::Map(std::string file) {
    tson::Tileson parser;
    map = parser.parse(fs::path(file));

}

