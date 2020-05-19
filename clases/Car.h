#ifndef RAYLIBTEMPLATE_CAR_H
#define RAYLIBTEMPLATE_CAR_H
//#define SPEED_MAX 1

#include <raylib.h>
#include <string>
#include "Entity.h"
#include "LoadData.h"

class Car : public Entity {
protected:
    float speed;
    float height;
    float width;
    float speed_max;
    float aceleration;
    float rotation;
public:
    virtual float getSpeed() = 0;

    virtual float getHeight() = 0;

    virtual float getWidth() = 0;

    virtual float getAceleration() = 0;

    float getRotation();

    void acelerate(float a);

    void move(float d) override;

    void rotate(float r) override;

};


#endif //RAYLIBTEMPLATE_CAR_H
