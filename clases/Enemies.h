#ifndef RAYLIBTEMPLATE_ENEMIES_H
#define RAYLIBTEMPLATE_ENEMIES_H

#include "Car.h"

class Enemies : public Car {
public:
    Enemies(LoadData &ld, const std::string &name, const std::string &key,float sp_max,float acel);

    void setCarPos(const Vector2 &carPos) override;

    Texture2D &getText2D() override;

    Vector2 &getCarPos() override;

    float getSpeed() override;

    float getHeight() override;

    float getWidth() override;

    float getAceleration() override;
};

#endif //RAYLIBTEMPLATE_ENEMIES_H
