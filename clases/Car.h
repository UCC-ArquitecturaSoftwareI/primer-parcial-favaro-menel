#include <raylib.h>
#include <string>
#include "Entity.h"
#ifndef RAYLIBTEMPLATE_NAVE_H
#define RAYLIBTEMPLATE_NAVE_H


class Car: public Entity {
public:
    Car();

    void move_x(float d) override;

    void move_y(float d) override;

    float getpos_x() override;

    float getpos_y() override;

    void setpos_x(float x) override;

    void setpos_y(float y) override;
};


#endif //RAYLIBTEMPLATE_NAVE_H
