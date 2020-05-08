#include "Renderer.h"

/**
 * Constructor of Renderer.
 * Initialize the map and car, begin drawing.
 */
Renderer::Renderer() {
    map = new Map;
    enemies = new Enemies(*map->getLd());
    player = new Player(*map->getLd());
    BeginDrawing();
    auto &c = map->getLd()->getMap().getBackgroundColor();
    ClearBackground({c.r, c.g, c.b, c.a});
    camera2D.rotation = 0.0f;
    camera2D.zoom = 1.0f;
    camera2D.offset = {500, 300};

};

/**
 * It draws the map, tile by tile.
 */
void Renderer::drawmap() {
    DrawTexture(map->getLd()->getTexMan().search("map"), 0, 90, RAYWHITE);
    for (int i = 0; i < map->getPosition().size(); i++)
        DrawTextureRec(map->getLd()->getTexMan().search("map"), map->getTileRec()[i], map->getPosition()[i], RAYWHITE);
}

/**
 * it draws the enemies.
 */
void Renderer::drawenemies() {
    DrawTextureEx(map->getLd()->getTexMan().search("enemy1"),enemies->getpos()[0],0,0.5,RAYWHITE);
    DrawTextureEx(map->getLd()->getTexMan().search("enemy2"),enemies->getpos()[1],0,0.5,RAYWHITE);
    DrawTextureEx(map->getLd()->getTexMan().search("enemy3"),enemies->getpos()[2],0,0.5,RAYWHITE);
    DrawTextureEx(map->getLd()->getTexMan().search("enemy4"),enemies->getpos()[3],0,0.5,RAYWHITE);
}

/**
 * It draws the player.
 */
void Renderer::drawplayer() {
    DrawTextureEx(map->getLd()->getTexMan().search("player"), player->getpos()[0], 0, 0.5, RAYWHITE);
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
Map *Renderer::getMap() {
    return map;
}


void Renderer::camerainit() {
    camera2D.target = player->getpos()[0];
    BeginMode2D(camera2D);
}

void Renderer::cameraend() {
    EndMode2D();
}

Enemies *Renderer::getEnemies() const {
    return enemies;
}

