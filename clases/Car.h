#ifndef RAYLIBTEMPLATE_CAR_H
#define RAYLIBTEMPLATE_CAR_H
#include <raylib.h>
#include <string>
#include "Entity.h"
#include "LoadData.h"

class Car : public Entity {
private:
    Camera2D camera;
public:
    Car(LoadData &ld);

    void movement();

    Vector2 getpos() override;

    Camera2D &getCamera();
};


#endif //RAYLIBTEMPLATE_CAR_H
