
#include "Buttons.h"

/**
 * Starts button and its position
 */
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

/**
 * Draw Button
 * @param vector
 */
void Buttons::drawstart(Vector2 vector) {
    DrawTextureRec(txt2d, button, vector, WHITE);
}


/**
 * Detect collision
 */
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

/**
 *
 * @return btnaction
 */
bool Buttons::isBtnaction(){
    return btnaction;
}

/**
 * Set button
 * @param button
 */
void Buttons::setButton(const Rectangle &button) {
    Buttons::button = button;
}

/**
 *
 * @return the state of the button
 */
int Buttons::getBtnstate(){
    return btnstate;
}
