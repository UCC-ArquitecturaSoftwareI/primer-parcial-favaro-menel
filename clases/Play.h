//
// Created by Euge on 19/06/2020.
//
#include "State.h"
#include "Game.h"
#ifndef RAYLIBTEMPLATE_PLAY_H
#define RAYLIBTEMPLATE_PLAY_H

class Play: public State {
private:
    Game *game;
public:
    Play();

    void Loop() override;

    ~Play() override;
};

#endif //RAYLIBTEMPLATE_PLAY_H

