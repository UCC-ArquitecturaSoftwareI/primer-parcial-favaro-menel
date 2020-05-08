#ifndef RAYLIBTEMPLATE_ENEMIES_H
#define RAYLIBTEMPLATE_ENEMIES_H
#include "Car.h"
class Enemies: public Car{
public:
    explicit Enemies(LoadData &ld);

    void movement() override;
};
#endif //RAYLIBTEMPLATE_ENEMIES_H
