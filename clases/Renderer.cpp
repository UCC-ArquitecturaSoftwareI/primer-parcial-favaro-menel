#include "Renderer.h"

/**
 * Constructor of Renderer.
 * Initialize the map and car, begin drawing.
 */
Renderer::Renderer() {
    map = new Map;
    int i = 0;
    for (auto file: {"Player", "Enemy1", "Enemy2", "Enemy3", "Enemy4"}) {
        car[i] = CarFactory::createcar(*map->getLd(), file);
        i++;
    }

    auto &c = map->getLd()->getMap().getBackgroundColor();
    ClearBackground({c.r, c.g, c.b, c.a});
    camera2D.rotation = 0.0f;
    camera2D.zoom = 1.0f;
    camera2D.offset = {500, 300};
}

/**
 * It draws the map, tile by tile.
 */
void Renderer::drawmap() {
    DrawTexture(map->getLd()->getTexMan().search("map"), 0, 90, RAYWHITE);
    for (int i = 0; i < map->getPosition().size(); i++)
        DrawTextureRec(map->getLd()->getTexMan().search("map"), map->getTileRec()[i], map->getPosition()[i], RAYWHITE);
}

/**
 * Draw all the cars in the window.
 */
void Renderer::drawcar() {
    for (auto c: car) {
        Rectangle sourceRec = {0.0f, 0.0f, c->getWidth(), c->getHeight()};
        Rectangle destRec = {c->getCarPos().x, c->getCarPos().y, c->getWidth(), c->getHeight()};
        Vector2 origin = {c->getWidth() / 2, c->getHeight() / 2};
        DrawTexturePro(c->getText2D(), sourceRec, destRec, origin, c->getRotation(), RAYWHITE);
    }
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
    EndDrawing();
}

/**
 * @return -> the map of the game.
 */
Map *Renderer::getMap() {
    return map;
}

/**
 * Start the camera2D.
 */
void Renderer::camerainit() {
    camera2D.target = car[0]->getCarPos();
    BeginDrawing();
    BeginMode2D(camera2D);
}

/**
 * End the camera2D.
 */
void Renderer::cameraend() {
    EndMode2D();
}
/**
 *  Render the movement of the player according the pressed keys.
 */
void Renderer::moveplayer() {
    if (IsKeyDown(KEY_A)) {
        car[0]->acelerate(-1);
        car[0]->move(car[0]->getSpeed());
    }
    if (IsKeyDown(KEY_S)) {
        car[0]->acelerate(1);
        car[0]->move(car[0]->getSpeed());
    }
    if (IsKeyDown(KEY_LEFT)) car[0]->rotate(-3.0f);
    if (IsKeyDown(KEY_RIGHT)) car[0]->rotate(3.0f);
    for (int i = 1; i < 5; i++)
        car[0]->isCollidingcars(*car[i]);
}

