#include "Renderer.h"

/**
 * Constructor of Renderer.
 * Initialize the map and car, begin drawing.
 */
Renderer::Renderer() {
    map = new Map;
    int i = 0;
    for (auto file: {"resources/Cars/car_black_4.png", "resources/Cars/car_blue_2.png",
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
    for (int i = 0; i < 5; i++) {
        DrawTextureEx(car[i]->getText2D(), car[i]->getCarPos(), 0, 0.5, RAYWHITE);
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
 *
 */
void Renderer::camerainit() {
    camera2D.target = car[0]->getCarPos();
    BeginMode2D(camera2D);
}

/**
 *
 */
void Renderer::cameraend() {
    EndMode2D();
}

void Renderer::moveplayer() {
    if (IsKeyDown(KEY_UP)) {
        car[0]->setCarPos({car[0]->getCarPos().x, car[0]->getCarPos().y - car[0]->getSpeed()});
    }
    if (IsKeyDown(KEY_DOWN)) {
        car[0]->setCarPos({car[0]->getCarPos().x, car[0]->getCarPos().y + car[0]->getSpeed()});
    }
    if (IsKeyDown(KEY_RIGHT)) {
        car[0]->setCarPos({car[0]->getCarPos().x + car[0]->getSpeed(), car[0]->getCarPos().y});
    }
    if (IsKeyDown(KEY_LEFT)) {
        car[0]->setCarPos({car[0]->getCarPos().x - car[0]->getSpeed(), car[0]->getCarPos().y});
    }
}

