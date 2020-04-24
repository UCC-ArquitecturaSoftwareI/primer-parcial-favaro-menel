#include <raylib.h>

#include "clases/Game.h"
#include "clases/Renderer.h"
#include "clases/LoadData.h"


#if defined(PLATFORM_WEB) // Para crear HTML5
#include <emscripten/emscripten.h>
#endif

//static void UpdateDrawFrame(void);          // Función dedicada a operar cada frame

int main() {
    Game &play = Game::get();
    play.finish();
/*#if defined(PLATFORM_WEB)  // Para versión Web.
    emscripten_set_main_loop(UpdateDrawFrame, 0, 1);
#else
    SetTargetFPS(60);   // Set our game to run at 60 frames-per-second
    // Main loop
    while (!WindowShouldClose()) {
        UpdateDrawFrame();
    }
#endif*/

}


/**
 *  Función dedicada a dibujar cada frame. Acá adentro se debe poner la logica necesaria para representar un nuevo frame
 *  del juego.
 */
/*static void UpdateDrawFrame(void) {

    // siempre hay que reproducir la musica que esta actualmente
    UpdateMusicStream(music);

    // Verifico Entradas de eventos.
    if (IsKeyDown(KEY_RIGHT)) {
        player->move_x(2.0f);
        map_x -= 3;
    }
    if (IsKeyDown(KEY_LEFT)) {
        player->move_x(-2.0f);
        map_x += 3;
    }
    if (IsKeyDown(KEY_UP)) {
        player->move_y(-2.0f);
        map_y += 3;
    }
    if (IsKeyDown(KEY_DOWN)) {
        player->move_y(2.0f);
        map_y -= 3;
    }


    // Comienzo a dibujar
    BeginDrawing();

    ClearBackground(RAYWHITE); // Limpio la pantalla con blanco

    // Dibujo todos los elementos del juego.
    DrawTextureEx(map, {map_x, map_y}, 0, 2, WHITE);
    player->draw();

    // Finalizo el dibujado
    EndDrawing();
}*/




