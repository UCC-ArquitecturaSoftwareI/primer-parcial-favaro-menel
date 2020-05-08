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
    render = new Renderer;
    soundmanager.LoadSounds("../resources/Music/tokyo-drift-8-bit.mp3", "game");
    soundmanager.Play("game");
}

/**
 * Function that closes window and audio.
 */
void Game::finish() {
    soundmanager.Stop("game");
    delete render;
    soundmanager.finish();
    CloseWindow();
}

/**
 * Function that set our game to run at 60 FPS and
 * define it for web version.
 */
void Game::Loop() {
#if defined(PLATFORM_WEB)
    emscripten_set_main_loop(UpdateDrawFrame, 0, 1);
#else
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        UpdateDrawFrame();
    }
#endif
}

/**
 * Function dedicated to draw every frame, also
 * it loads all the logic needed to draw every frame.
 */
void Game::UpdateDrawFrame() {
    soundmanager.Rewind("game");
    render->camerainit();
    render->drawmap();
    render->drawcar();
    render->moveplayer();
    render->cameraend();
    render->finish();
}

int Game::getHeight() const {
    return Height;
}

int Game::getWidth() const {
    return Width;
}






