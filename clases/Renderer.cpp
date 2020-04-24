#include "Renderer.h"


Renderer::Renderer() = default;

void Renderer::drawmap() {
    auto &c = map.getLd().getMap().getBackgroundColor();
    ClearBackground({c.r, c.g, c.b, c.a});

    DrawTextureRec(map.getLd().getTexMan().search("map"), map.getTileRec().operator[](0), map.getPosition().operator[](0), WHITE);
    DrawTextureRec(map.getLd().getTexMan().search("map"), map.getTileRec().operator[](1), map.getPosition().operator[](0), WHITE);
}

void Renderer::drawenemies() {

}

void Renderer::drawplayer() {

}
