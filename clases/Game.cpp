#include "Game.h"
#include "LoadData.h"

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
    soundmanager.LoadSounds("../resources/Cyberpunk Moonlight Sonata.mp3", "game");
    PlayMusicStream(soundmanager.search("game"));
}

/**
 * Function to close window.
 */
void Game::finish() {
    UnloadMusicStream(soundmanager.search("game"));
    CloseAudioDevice();
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
    UpdateMusicStream(soundmanager.search("game"));
}






