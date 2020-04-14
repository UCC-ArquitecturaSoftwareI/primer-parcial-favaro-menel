#include <raylib.h>
#include <string>
#ifndef RAYLIBTEMPLATE_NAVE_H
#define RAYLIBTEMPLATE_NAVE_H


class Car {
    Texture2D car;
    Vector2 car_pos;
public:
    Car(std::string text, const Vector2 &carPos);

    void draw();
    void move_x(float d);
    void move_y(float d);
};


#endif //RAYLIBTEMPLATE_NAVE_H
