#ifndef RAYLIBTEMPLATE_GAME_H
#define RAYLIBTEMPLATE_GAME_H

#include <string>
#include <raylib.h>
#include <iostream>
#include "State.h"
/*
class Game {
private:
    Game();

public:
    static Game &get();

    void finish();

    void Loop();

    void UpdateDrawFrame();

    int getHeight() const;

    int getWidth() const;
};
*/
class Game: public State{
private:
    Game();
public:
    //static Game &get();

    void playInit() = default;

    void finish();

    void Loop();

    void UpdateDrawFrame();
};
#endif //RAYLIBTEMPLATE_GAME_H