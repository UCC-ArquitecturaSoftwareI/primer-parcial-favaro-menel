#ifndef RAYLIBTEMPLATE_GAME_H
#define RAYLIBTEMPLATE_GAME_H

#include <string>
#include <raylib.h>
#include <iostream>
#include "SoundManager.h"
#include "Renderer.h"

class Game {
private:
    float Height = 600;
    float Width = 1000;
    SoundManager soundmanager;
    Renderer *render;
    Game();

public:
    static Game &get();

    void finish();

    void Loop();

    void UpdateDrawFrame();

    int getHeight() const;

    int getWidth() const;
};

#endif //RAYLIBTEMPLATE_GAME_H