#include "Game.h"

/**
 * Constructor of the class.
 */
Game::Game() {
    renderer = new Renderer;
    soundmanager.LoadSounds("../resources/Music/tokyo-drift-8-bit.mp3", "game");
    soundmanager.Play("game");
}

/**
 * Function that closes window and audio.
 */
void Game::finish() {
    soundmanager.Stop("game");
    delete renderer;
    soundmanager.finish();
}


/**
 * Function dedicated to draw every frame, also
 * it loads all the logic needed to draw every frame.
 */
int Game::UpdateDrawFrame() {
    soundmanager.Rewind("game");
    renderer->camerainit();
    renderer->drawmap();
    renderer->drawcar();
    renderer->moveplayer();
    renderer->cameraend();
    renderer->finish();

    if (IsKeyDown(KEY_M)){
        return 1;
    }
    return 0;
}

/**
 *
 * @return game singleton
 */
Game *Game::get() {
    static Game g;
    return &g;
}

/**
 *
 * @return renderer
 */
Renderer *Game::getRenderer() const {
    return renderer;
}










