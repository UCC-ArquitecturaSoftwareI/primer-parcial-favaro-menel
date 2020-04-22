

#include "LoadData.h"

void LoadData::LoadMap(std::string file) {
    tson::Tileson parser;
    map = parser.parse(fs::path(file));
    if (map.getStatus() == tson::ParseStatus::OK) {
        for (auto &tileset: map.getTilesets()) {
            text2D = tex_man->LoadText("resources/Map" + tileset.getImage().string());
            map_tileset = &tileset;
        }
    }
}

void LoadData::LoadPlayer() {
    auto objs = map.getLayer("Cars");
    tson::Object *play = objs->firstObj("Player");
    player.setpos_x(play->getPosition().x);
    player.setpos_y(play->getPosition().y);
}
