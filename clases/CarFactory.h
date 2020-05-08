#ifndef RAYLIBTEMPLATE_CARFACTORY_H
#define RAYLIBTEMPLATE_CARFACTORY_H
#include "Car.h"
#include "Jugador.h"
#include "Enemies.h"

class CarFactory{
public:
    static  Car *createcar(LoadData &ld,const std::string& file);
};



#endif //RAYLIBTEMPLATE_CARFACTORY_H
