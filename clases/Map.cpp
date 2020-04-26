
#include "Map.h"

Map::Map() {
    int i = 0;
    ld.LoadMap("../resources/Map/map.json");
    rectangle = ld.Loadline();

    int FirstID = ld.getMapTileset()->getFirstgid();
    int Columns = ld.getMapTileset()->getColumns();
    int Margin = ld.getMapTileset()->getMargin();
    int Space = ld.getMapTileset()->getSpacing();


    for (auto name:{"Background", "Frontground"}) {
        auto *layer = ld.getMap().getLayer(name);
        for (auto&[pos, tile]: layer->getTileData()) {
            tile_rec[i].x = 0.0f;
            tile_rec[i].y = 0.0f;
            tile_rec[i].x = ld.getMap().getTileSize().x;
            tile_rec[i].y = ld.getMap().getTileSize().y;
            if (tile != nullptr) {
                position[i] = {(float) std::get<0>(pos) * ld.getMap().getTileSize().x,
                               (float) std::get<1>(pos) * ld.getMap().getTileSize().y};

                int baseTilePosition = (tile->getId() - FirstID);

                int tileModX = (baseTilePosition % Columns);
                int currentRow = (baseTilePosition / Columns);
                int offsetX = tileModX * (ld.getMap().getTileSize().x + Space) + Margin;
                int offsetY = currentRow * (ld.getMap().getTileSize().y + Space) + Margin;

                tile_rec[i].x = offsetX;
                tile_rec[i].y = offsetY;
                i++;
            }
        }
    }
}

LoadData &Map::getLd() {
    return ld;
}

std::vector<Rectangle> &Map::getTileRec() {
    return tile_rec;
}

std::vector<Vector2> &Map::getPosition() {
    return position;
}

Rectangle &Map::getRectangle() {
    return rectangle;
}

