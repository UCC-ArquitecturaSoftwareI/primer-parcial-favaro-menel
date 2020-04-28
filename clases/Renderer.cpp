#include "Renderer.h"

Renderer::Renderer() {
    BeginDrawing();
    auto &c = map.getLd().getMap().getBackgroundColor();
    ClearBackground({c.r,c.g,c.b,c.a});
    //BeginMode2D(car.getCamera());
};

void Renderer::drawmap() {


    //DrawTexture(map.getLd().getTexMan().search("map"),0,0,RAYWHITE);
    //DrawTextureRec(map.getLd().getTexMan().search("map"), map.getTileRec()[0], map.getPosition()[0], RAYWHITE);
    //DrawTextureRec(map.getLd().getTexMan().search("map"), map.getTileRec()[1], map.getPosition()[1], RAYWHITE);
}

void Renderer::drawenemies() {

}

void Renderer::drawplayer() {
    DrawTexture(car.getLd().getTexMan().search("player"), car.getpos().x, car.getpos().y, RAYWHITE);
}

void Renderer::drawtext() {
    DrawText("Inicio", 20, 20, 40, LIGHTGRAY);
}

void Renderer::finish() {
    //EndMode2D();
    EndDrawing();
}

