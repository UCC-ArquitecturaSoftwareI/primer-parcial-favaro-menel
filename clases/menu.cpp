#include "menu.h"
#include "Play.h"

/**
 * Draw initial screen
 */
void menu::Loop() {
    BeginDrawing();
    ClearBackground(WHITE);
    DrawText("Tuned Cars",400,100,60,BLACK);
    DrawText("Reto en Carlos Paz",250,200,40,BLACK);
    strbtn->getBtn()->checkcol();
    strbtn->strategies();
    if(strbtn->getBtn()->getBtnstate() == 2){
        if (strbtn->getBtn()->isBtnaction()){
            document->changeState(new Play);
        }
    }

    EndDrawing();
}

menu::~menu() {}

/**
 * Change to a new button state
 */
menu::menu() {
    strbtn = new Strategybutton(0);
}
