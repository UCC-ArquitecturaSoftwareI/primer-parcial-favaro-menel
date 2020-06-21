
#include "Buttons.h"

Buttons::Buttons() {
    txt2d = LoadTexture("../resources/Buttons/bttn_use.png");

    button.x = 0;
    button.y = 0;
    button.width = 384;
    button.height = 130;

    btnaction = false;

    mousePoint = {0.0f, 0.0f};

    btnstate = 0 ;
}

void Buttons::drawstart(Vector2 vector) {
    DrawTextureRec(txt2d, button, vector, WHITE);
}

void Buttons::checkcol() {
    mousePoint = GetMousePosition();
    setButton({400, 250,388,136});
    if (CheckCollisionPointRec(mousePoint, button)){
        if (IsMouseButtonDown(MOUSE_LEFT_BUTTON)) btnstate = 2;
        else btnstate = 1;
        if(IsMouseButtonReleased(MOUSE_LEFT_BUTTON))
            btnaction = true;
    }else
        btnstate = 0;
    setButton({0,0,384,130});
}

bool Buttons::isBtnaction(){
    return btnaction;
}

void Buttons::setButton(const Rectangle &button) {
    Buttons::button = button;
}

int Buttons::getBtnstate(){
    return btnstate;
}
