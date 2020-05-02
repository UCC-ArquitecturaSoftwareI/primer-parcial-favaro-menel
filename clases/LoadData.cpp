#include "LoadData.h"

/**
 * it loads the player data.
 * @return -> the initial position of the car's player.
 */
Vector2 LoadData::LoadPlayer() {
    Vector2 player_pos;
    tex_man.LoadTextures("resources/Cars/car_red_3.png", "player");
    auto objs = map.getLayer("Cars");
    tson::Object *player = objs->firstObj("Player");
    player_pos.x = player->getPosition().x;
    player_pos.y = player->getPosition().y;
    return player_pos;
}

/**
 * Load enemies data.
 * @return -> Vector with initial positions of the enemies.
 */
std::vector<Vector2> LoadData::LoadEnemies() {
    std::vector<Vector2> enemy_pos;
    tex_man.LoadTextures("resources/Cars/car_black_4.png", "enemy");
    auto objs = map.getLayer("Cars");
    std::vector<tson::Object> enemies = objs->getObjectsByName("Enemy");
    for (int i = 0; i < enemies.size(); i++) {
        enemy_pos[i].x = enemies[i].getPosition().x;
        enemy_pos[i].y = enemies[i].getPosition().y;
    }
    return enemy_pos;
}

/**
 * It loads the line of the track
 * @return -> the rectangle of the line.
 */
Rectangle LoadData::Loadline() {
    Rectangle line;
    auto objs = map.getLayer("Line");
    tson::Object *l = objs->firstObj("Line");
    line.x = l->getPosition().x;
    line.y = l->getPosition().y;
    line.height = l->getSize().y;
    line.width = l->getSize().x;
    return line;
}

/**
 * @return -> the tson::Map.
 */
tson::Map &LoadData::getMap() {
    return map;
}

/**
 * @return -> the tson::Tileset.
 */
tson::Tileset *LoadData::getMapTileset() {
    return map_tileset;
}

/**
 * @return -> The texturemanager.
 */
TextureManager LoadData::getTexMan() {
    return tex_man;
}

/**
 * Constructor that loads the .json of the map.
 */
LoadData::LoadData(std::string file) {
    tson::Tileson parser;
    map = parser.parse(fs::path(file));
    if (map.getStatus() == tson::ParseStatus::OK) {
        for (auto &tileset : map.getTilesets()) {
            tex_man.LoadTextures("../resources/Map/"  + tileset.getImage().string(), "map");
            map_tileset = &tileset;
        }
    }
};
