#include "menu.h"
#include "Play.h"

menu::menu() {

}

void menu::Loop() {
    if (IsKeyDown(KEY_L)) {
        document->changeState(new Play);
    }
    BeginDrawing();
    ClearBackground(WHITE);
    DrawText("Menu", 100, 100, 30, BLACK);
    EndDrawing();
}

menu::~menu() {

}
