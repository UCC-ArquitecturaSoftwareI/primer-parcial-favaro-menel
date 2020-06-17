#include "Game.h"



/*
Game &Game::get() {
    static Game g;
    return g;
}
*/
/**
 * Constructor of the class.
 */
Game::Game() {
    InitWindow(Width, Height, "Cars - Reto Cruz del Eje");
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
    renderer->camerainit();
    renderer->drawmap();
    renderer->drawcar();
    renderer->moveplayer();
    renderer->cameraend();
    renderer->finish();
}
/**
 * Function that returns the constructor.
 * @return -> object;
 */
Game &Game::playGame() {
    static Game g;
    return g;
}










