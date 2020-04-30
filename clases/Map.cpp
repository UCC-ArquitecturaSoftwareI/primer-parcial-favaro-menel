#include "Map.h"

Map::Map() {
    ld = new LoadData ("../resources/Map/map_2.json");
    int i = 0;
    rectangle = ld->Loadline();

    int FirstID = ld->getMapTileset()->getFirstgid();
    int Columns = ld->getMapTileset()->getColumns();
    int Space = ld->getMapTileset()->getSpacing();
    int Margins = ld->getMapTileset()->getMargin();

    for (auto name: {"Background","Frontground"}) {
        auto *layer = ld->getMap().getLayer(name);
        for (auto&[pos, tile] : layer->getTileData()) {
            tile_rec.push_back({0.0f, 0.0f, static_cast<float>(ld->getMap().getTileSize().x),
                                static_cast<float>(ld->getMap().getTileSize().y)});
            if (tile != nullptr) {
                position.push_back({(float) std::get<0>(pos) * ld->getMap().getTileSize().x,
                                    (float) std::get<1>(pos) * ld->getMap().getTileSize().y});
            }

            int baseTilePosition = (tile->getId() - FirstID);

            int tileModX = (baseTilePosition % Columns);
            int currentRow = (baseTilePosition / Columns);
            int offsetX = tileModX * (ld->getMap().getTileSize().x) + Space + Margins;
            int offsetY = currentRow * (ld->getMap().getTileSize().y) + Space + Margins;

            tile_rec[i].x = offsetX;
            tile_rec[i].y = offsetY;
            i++;
        }
    }
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

LoadData *Map::getLd() const {
    return ld;
}


