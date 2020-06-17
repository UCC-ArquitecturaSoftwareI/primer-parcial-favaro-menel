/**
 * @title       State class
 * @file        State.h
 * @version     1.0
 * @date        16/06/2020
 * @author      Angelo Menel
 * @author      Juan Cruz Favaro
 * @author      Emanuel Chiletti
 */

#ifndef RAYLIBTEMPLATE_STATE_H
#define RAYLIBTEMPLATE_STATE_H

#include "Renderer.h"
#include "SoundManager.h"
#include "Game.h"
/**
 * @class State
 * @brief Abstract class of differents states of the game.
 */
class State {
protected:
    Renderer *renderer;             /** Renderer value. Pointer to a Renderer object*/
    float Height = 600;             /** float value. Window's height*/
    float Width = 1000;             /** float value. Window's widht*/
    SoundManager soundmanager;      /** SoundManager value. SoundManager object*/
public:
    State() = default;
    virtual static Game &playGame() = 0;
    virtual void playInit() = 0;
};


#endif //RAYLIBTEMPLATE_STATE_H
