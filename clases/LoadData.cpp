#include "LoadData.h"

/**
 * it loads the player texture.
 */
void LoadData::LoadCars(const std::string& file,const std::string& key) {
    tex_man.LoadTextures(file, key);
}


/**
 *  Initial position of the player
 * @param name -> key name of Tiled.
 * @return -> position of the player.
 */
Vector2 LoadData::Posplayer(const std::string &name) {
    Vector2 player_pos;
    auto objs = map.getLayer("Cars");
    tson::Object *player = objs->firstObj(name);
    player_pos.x = player->getPosition().x;
    player_pos.y = player->getPosition().y;
    return player_pos;
}


/**
 * Initial position of the enemy.
 * @param name -> key name of Tiled.
 * @return -> position of the enemy.
 */
Vector2 LoadData::Posenemy(const std::string &name) {
    Vector2 enemy_pos;
    auto objs = map.getLayer("Cars");
    tson::Object *enemy = objs->firstObj(name);
    enemy_pos.x = enemy->getPosition().x;
    enemy_pos.y = enemy->getPosition().y;
    return enemy_pos;
};



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
            tex_man.LoadTextures("../resources/Map/" + tileset.getImage().string(), "map");
            map_tileset = &tileset;
        }
    }
}

/**
 * Load button textures
 * @param file
 * @param key
 */
void LoadData::LoadButtons(const std::string& file,const std::string& key) {
    tex_man.LoadTextures(file, key);
}




