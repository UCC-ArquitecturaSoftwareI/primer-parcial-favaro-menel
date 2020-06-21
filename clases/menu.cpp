#include "menu.h"
#include "Play.h"


void menu::Loop() {
    /*if (IsKeyDown(KEY_L)) {
        document->changeState(new Play);
    }*/
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

menu::~menu() {

}

menu::menu() {
    strbtn = new Strategybutton(0);
}
