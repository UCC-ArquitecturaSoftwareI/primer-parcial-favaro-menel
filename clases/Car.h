#ifndef RAYLIBTEMPLATE_CAR_H
#define RAYLIBTEMPLATE_CAR_H
//#define SPEED_MAX 1

#include <raylib.h>
#include <string>
#include "Entity.h"
#include "LoadData.h"

class Car : public Entity {
protected:
    Vector2 speed;
    float height;
    float width;
    float speed_max;
    Vector2 aceleration;
public:
    virtual Vector2 getSpeed() = 0;

    virtual float getHeight() = 0;

    virtual float getWidth() = 0;

    float getAngle();

    void aceleratex(int x);

    void aceleratey(int y);

    void move() override;

};




#endif //RAYLIBTEMPLATE_CAR_H
