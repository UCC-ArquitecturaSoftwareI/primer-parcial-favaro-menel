#include "Renderer.h"

/**
 * Constructor of Renderer.
 * Initialize the map and car, begin drawing.
 */
Renderer::Renderer() {
    map = new Map;
    int i = 0;
    for (auto file: {"resources/Cars/car_black_small_4.png", "resources/Cars/car_blue_2.png",
                     "resources/Cars/car_green_3.png", "resources/Cars/car_red_3.png",
                     "resources/Cars/car_yellow_1.png"}) {
        car[i] = CarFactory::createcar(*map->getLd(), file);
        i++;
    }
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
 * Draw all the cars in the window.
 */
void Renderer::drawcar() {

    for (auto c: car) {
        Rectangle sourceRec = {0.0f, 0.0f, c->getWidth(), c->getHeight()};
        Rectangle destRec = {c->getCarPos().x, c->getCarPos().y, c->getWidth(), c->getHeight()};
        Vector2 origin = {c->getWidth() / 2, c->getHeight() / 2};
        DrawTexturePro(c->getText2D(), sourceRec, destRec, origin, c->getAngle(), RAYWHITE);
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
    EndMode2D();
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
    BeginMode2D(camera2D);
}

/**
 * End the camera2D.
 */
void Renderer::cameraend() {
    EndMode2D();
}

void Renderer::moveplayer() {

    if (IsKeyDown(KEY_W)) {
        car[0]->aceleratey(-0.2);
    }
    if (IsKeyDown(KEY_S)) {
        car[0]->aceleratey(0.2);
    }
    if (IsKeyDown(KEY_D)) {
        car[0]->aceleratex(0.2);
    }
    if (IsKeyDown(KEY_A)) {
        car[0]->aceleratex(-0.2);
    }
    car[0]->move();
}

