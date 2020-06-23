
#include "Buttons.h"
#include "Strategybutton1.h"

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
    animaci = new Strategybutton1();
}

/**
 * Draw Button
 * @param vector
 */
void Buttons::drawstart() {
    Vector2 pos = animaci->strategies();
    DrawTextureRec(txt2d, button, pos, WHITE);
}


/**
 * Detect collision
 */
void Buttons::checkcol() {
    mousePoint = GetMousePosition();
    setButton({400, 250, 388, 136});
    if (CheckCollisionPointRec(mousePoint, button)) {
        animaci->pressed(1);
        if (IsMouseButtonDown(MOUSE_LEFT_BUTTON))
            animaci->pressed(2);

        if (IsMouseButtonReleased(MOUSE_LEFT_BUTTON))
            btnaction = true;
    } else{
        animaci->pressed(0);
    }

    setButton({0, 0, 384, 130});
}

/**
 *
 * @return btnaction
 */
bool Buttons::isBtnaction() {
    return btnaction;
}

/**
 * Set button
 * @param button
 */
void Buttons::setButton(const Rectangle &button) {
    Buttons::button = button;
}


