#ifndef RAYLIBTEMPLATE_CAR_H
#define RAYLIBTEMPLATE_CAR_H
#include <raylib.h>
#include <string>
#include "Entity.h"
#include "LoadData.h"

class Car : public Entity {
private:
public:
    Car(LoadData &ld);


    Vector2 getpos() override;

};


#endif //RAYLIBTEMPLATE_CAR_H
