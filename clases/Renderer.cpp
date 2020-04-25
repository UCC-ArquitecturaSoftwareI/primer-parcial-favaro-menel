#include "Renderer.h"


Renderer::Renderer() {
    BeginDrawing();
    BeginMode2D(car.getCamera());
};

void Renderer::drawmap() {
    auto &c = map.getLd().getMap().getBackgroundColor();
    ClearBackground({c.r, c.g, c.b, c.a});

    DrawTextureRec(map.getLd().getTexMan().search("map"), map.getTileRec()[0], map.getPosition()[0], WHITE);
    DrawTextureRec(map.getLd().getTexMan().search("map"), map.getTileRec()[1], map.getPosition()[1], WHITE);
}

void Renderer::drawenemies() {

}

void Renderer::drawplayer() {
    DrawTexture(car.getLd().getTexMan().search("player"), car.getpos().x, car.getpos().y, WHITE);
}

void Renderer::finish() {
    EndMode2D();
    EndDrawing();
}

