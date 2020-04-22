
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
    if (!error) {
        InitWindow(Width, Height, "raylib template - advance game");
        InitAudioDevice();
        error = true;
    } else {
        std::cout << "La clase ya esta instanciada\n";
    }
}

/**
 * Function to close window.
 */
void Game::finish() {
    CloseAudioDevice();
    CloseWindow();
}




