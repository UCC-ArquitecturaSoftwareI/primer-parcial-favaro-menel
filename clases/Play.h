//
// Created by Euge on 19/06/2020.
//
#ifndef RAYLIBTEMPLATE_PLAY_H
#define RAYLIBTEMPLATE_PLAY_H

#include "State.h"
#include "Game.h"

class Play: public State {
private:
    Game *game;
public:
    Play();

    void Loop() override;

    ~Play() override;
};

#endif //RAYLIBTEMPLATE_PLAY_H

