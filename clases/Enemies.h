#ifndef RAYLIBTEMPLATE_ENEMIES_H
#define RAYLIBTEMPLATE_ENEMIES_H

#include "Car.h"

class Enemies : public Car {
public:
    Enemies(LoadData &ld, const std::string &name, const std::string &key);

    void setCarPos(const Vector2 &carPos) override;

    Texture2D &getText2D() override;

    Vector2 &getCarPos() override;

    int getSpeed() override;
};

#endif //RAYLIBTEMPLATE_ENEMIES_H
