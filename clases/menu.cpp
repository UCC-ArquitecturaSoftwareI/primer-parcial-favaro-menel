#include "menu.h"
#include "Play.h"

/**
 * Draw initial screen
 */
void menu::Loop() {
    BeginDrawing();
    ClearBackground(WHITE);
    DrawText("Tuned Cars", 320, 100, 60, BLACK);
    DrawText("Reto en Carlos Paz", 320, 200, 40, BLACK);
    strbtn->checkcol();
    strbtn->drawstart();

    if (strbtn->isBtnaction()) {
        document->changeState(new Play);
    }

    EndDrawing();
}

menu::~menu() {}

/**
 * Change to a new button state
 */
menu::menu() {
    strbtn = new Buttons();
}
