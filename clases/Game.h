#ifndef RAYLIBTEMPLATE_GAME_H
#define RAYLIBTEMPLATE_GAME_H
#endif //RAYLIBTEMPLATE_GAME_H

#include <string>
#include <raylib.h>
#include <iostream>

class Game {
private:
    int Height = 450;
    int Width = 800;

    Game();

public:
    static Game &get();


    static void finish();

};