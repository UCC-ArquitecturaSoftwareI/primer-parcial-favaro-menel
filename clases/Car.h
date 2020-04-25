#ifndef RAYLIBTEMPLATE_NAVE_H
#define RAYLIBTEMPLATE_NAVE_H
#include <raylib.h>
#include <string>
#include "Entity.h"

class Car : public Entity {
private:
    Camera2D camera;
public:
    Car();

    void movement();

    Vector2 getpos() override;

    LoadData &getLd() override;

    const Camera2D &getCamera() const;
};


#endif //RAYLIBTEMPLATE_NAVE_H
