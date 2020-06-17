/**
 * @title       CarFactory class
 * @file        CarFactory.h
 * @version     1.0
 * @date        20/05/2020
 * @author      Angelo Menel
 * @author      Juan Cruz Favaro
 * @author      Emanuel Chiletti
 */

#ifndef RAYLIBTEMPLATE_CARFACTORY_H
#define RAYLIBTEMPLATE_CARFACTORY_H
#include "Car.h"
#include "Jugador.h"
#include "Enemies.h"
/**
 * @class CarFactory
 * @brief Patron used to instance every car in the game.
 */
class CarFactory{
public:
    static  Car *createcar(LoadData &ld,const std::string& key);
};



#endif //RAYLIBTEMPLATE_CARFACTORY_H
