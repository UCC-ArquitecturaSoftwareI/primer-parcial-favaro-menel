#include "menu.h"

menu::menu() {

}

void menu::Loop() {
    if (IsKeyDown(KEY_M)){
        document->changeState(new Play);
    }
    BeginDrawing();
    DrawText("Menu",100,100,30,BLACK);
    EndDrawing();
}

menu::~menu() {

}
