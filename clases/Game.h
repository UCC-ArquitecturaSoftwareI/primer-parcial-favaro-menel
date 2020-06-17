/**
 * @title       Game Singleton class
 * @file        Game.h
 * @version     1.0
 * @date        5/04/2020
 * @author      Angelo Menel
 * @author      Juan Cruz Favaro
 * @author      Emanuel Chiletti
 */



#ifndef RAYLIBTEMPLATE_GAME_H
#define RAYLIBTEMPLATE_GAME_H

#include <string>
#include <raylib.h>
#include <iostream>
#include "State.h"

/**
 * @class Game
 * @brief Inherited class of State
 */
class Game: public State{
private:
    Game();                 /**Private Constructor of the Singleton class*/
public:
    static Game &playGame() override;

    void playInit() = default;

    void finish();

    void Loop();

    void UpdateDrawFrame();
};
#endif //RAYLIBTEMPLATE_GAME_H