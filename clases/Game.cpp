
#include "Game.h"

/**
 * Function that returns the constructor.
 * @return -> object;
 */
Game &Game::get() {
        static Game g;
        return g;
}

/**
 * Constructor of the class.
 */
Game::Game() {
        InitWindow(Width, Height, "raylib template - advance game");
        InitAudioDevice();
}

/**
 * Function to close window.
 */
void Game::finish() {
    CloseAudioDevice();
    CloseWindow();
}




