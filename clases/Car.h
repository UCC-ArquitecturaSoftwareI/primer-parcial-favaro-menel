#ifndef RAYLIBTEMPLATE_CAR_H
#define RAYLIBTEMPLATE_CAR_H

#include <raylib.h>
#include <string>
#include "Entity.h"
#include "LoadData.h"

class Car : public Entity {
protected:
    int speed;
public:
    std::vector<Vector2> getpos() override;

    virtual void movement() = 0;
};


#endif //RAYLIBTEMPLATE_CAR_H
