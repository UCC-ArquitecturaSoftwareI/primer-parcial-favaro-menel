#include "Play.h"
#include "menu.h"

/**
 * Set the game
 */
Play::Play() {
    game = Game::get();
}

/**
 * Maintains state unless i = 1
 */
void Play::Loop() {
    int i = game->UpdateDrawFrame();
    if (i == 1) {
        document->changeState(new menu);
    }
}

Play::~Play() {}

