#include "Renderer.h"

/**
 * Constructor of Renderer.
 * Initialize the map and car, begin drawing.
 */
Renderer::Renderer() {
    map = new Map;
    car = new Car(*map->getLd());
    BeginDrawing();
    auto &c = map->getLd()->getMap().getBackgroundColor();
    ClearBackground({c.r, c.g, c.b, c.a});
    BeginMode2D(car->getCamera());
};

/**
 * It draws the map, tile by tile.
 */
void Renderer::drawmap() {
    DrawTexture(map->getLd()->getTexMan().search("map"), 0, 0, RAYWHITE);
    for (int i = 0; i < map->getPosition().size(); i++)
        DrawTextureRec(map->getLd()->getTexMan().search("map"), map->getTileRec()[i], map->getPosition()[i], RAYWHITE);
}

/**
 * it draws the enemies.
 */
void Renderer::drawenemies() {

}

/**
 * It draws the player.
 */
void Renderer::drawplayer() {
    DrawTexture(map->getLd()->getTexMan().search("player"), car->getpos().x, car->getpos().y, RAYWHITE);
}

/**
 * It draw texts in the game.
 */
void Renderer::drawtext() {
    DrawText("Inicio", 20, 20, 40, LIGHTGRAY);
}

/**
 * It finishes the drawing.
 */
void Renderer::finish() {
    EndMode2D();
    EndDrawing();
}

/**
 * @return -> the map of the game.
 */
Map *Renderer::getMap() const {
    return map;
}

