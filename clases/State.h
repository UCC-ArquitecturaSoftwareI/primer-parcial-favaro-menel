#ifndef RAYLIBTEMPLATE_STATE_H
#define RAYLIBTEMPLATE_STATE_H

#include "Renderer.h"
#include "SoundManager.h"
#include "Game.h"

class State {
protected:
    Renderer *renderer;
    float Height = 600;
    float Width = 1000;
    SoundManager soundmanager;
public:
    State() = default;
    virtual static Game &playGame() = 0;
    virtual void playInit() = 0;
};


#endif //RAYLIBTEMPLATE_STATE_H
