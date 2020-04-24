

#include "LoadData.h"

/**
 *  It loads all data from the map.json
 * @param file -> Map texture.
 */
void LoadData::LoadMap(std::string file) {
    tson::Tileson parser;
    map = parser.parse(fs::path(file));
    if (map.getStatus() == tson::ParseStatus::OK) {
        for (auto &tileset: map.getTilesets()) {
            tex_man.LoadText("resources/Map" + tileset.getImage().string(), "map");
            map_tileset = &tileset;
        }
    }
}

/**
 * it loads the player data.
 * @return -> the initial position of the car's player.
 */
Vector2 LoadData::LoadPlayer() {
    Vector2 player_pos;
    if (map.getStatus() == tson::ParseStatus::OK) {
        tex_man.LoadText("resources/Cars/car_red_3.png", "player");
        auto objs = map.getLayer("Cars");
        tson::Object *play = objs->firstObj("Player");
        player_pos.x = play->getPosition().x;
        player_pos.y = play->getPosition().y;
        return player_pos;
    }

}

std::vector<Vector2> LoadData::LoadEnemies() {
    std::vector<Vector2> enemy_pos;
    tex_man.LoadText("resources/Cars/car_black_4.png","enemy");
    if (map.getStatus() == tson::ParseStatus::OK) {
        auto objs = map.getLayer("Cars");
        std::vector<tson::Object> enemies = objs->getObjectsByName("Enemy");
        for (int i = 0; i < enemies.size(); i++) {
            enemy_pos[i].x = enemies[i].getPosition().x;
            enemy_pos[i].y = enemies[i].getPosition().y;
        }
    }
    return enemy_pos;
}

tson::Map &LoadData::getMap() {
    return map;
}

tson::Tileset *LoadData::getMapTileset(){
    return map_tileset;
}

TextureManager LoadData::getTexMan() {
    return tex_man;
}

/**
 * Constructor by default.
 */
LoadData::LoadData() = default;
