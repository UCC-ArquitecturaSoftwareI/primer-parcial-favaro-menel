#include "Renderer.h"


Renderer::Renderer() {

}

void Renderer::drawmap() {
    Rectangle tile_rec;
    tile_rec.x = 0.0f;
    tile_rec.y = 0.0f;
    ld.LoadMap("resources/Map/map.json");

}
