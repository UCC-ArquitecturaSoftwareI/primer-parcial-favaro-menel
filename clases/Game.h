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
#include "SoundManager.h"
#include "Renderer.h"

/**
 * @class Game
 * @brief Inherited class of State
 */
class Game{
private:
    Game();                /**Private Constructor of the Singleton class*/
    SoundManager soundmanager;
    Renderer *renderer;
public:
    static Game *get();

    void finish();

    int UpdateDrawFrame();

    Renderer *getRenderer() const;
};
#endif //RAYLIBTEMPLATE_GAME_H