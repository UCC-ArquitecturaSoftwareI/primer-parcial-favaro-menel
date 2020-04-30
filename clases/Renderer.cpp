#include "Renderer.h"

Renderer::Renderer() {
    map = new Map;
    car = new Car;
    BeginDrawing();
    auto &c = map->getLd()->getMap().getBackgroundColor();
    ClearBackground({c.r, c.g, c.b, c.a});
    BeginMode2D(car->getCamera());
};

void Renderer::drawmap() {
    DrawTexture(map->getLd()->getTexMan().search("map"), 0, 0, RAYWHITE);
    for (int i = 0; i < map->getPosition().size(); i++)
        DrawTextureRec(map->getLd()->getTexMan().search("map"), map->getTileRec()[i], map->getPosition()[i], RAYWHITE);
}

void Renderer::drawenemies() {

}

void Renderer::drawplayer() {
    DrawTexture(map->getLd()->getTexMan().search("player"), car->getpos().x, car->getpos().y, RAYWHITE);
}

void Renderer::drawtext() {
    DrawText("Inicio", 20, 20, 40, LIGHTGRAY);
}

void Renderer::finish() {
    EndMode2D();
    EndDrawing();
}

Map *Renderer::getMap() const {
    return map;
}

