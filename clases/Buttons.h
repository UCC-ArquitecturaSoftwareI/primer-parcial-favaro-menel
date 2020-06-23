#ifndef RAYLIBTEMPLATE_BUTTONS_H
#define RAYLIBTEMPLATE_BUTTONS_H

#include "raylib.h"
#include "Strategy.h"

class Buttons {
private:
    Rectangle button;
    Texture2D txt2d;
    bool btnaction;
    Vector2 mousePoint;
    Strategy *animaci;

public:
    Buttons();

    void checkcol();

    bool isBtnaction();

    void setButton(const Rectangle &button);

    int getBtnstate();

    void drawstart ();
};


#endif //RAYLIBTEMPLATE_BUTTONS_H
