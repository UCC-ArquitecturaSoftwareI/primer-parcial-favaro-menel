#include "clases/Game.h"


#if defined(PLATFORM_WEB) // Para crear HTML5
#include <emscripten/emscripten.h>
#endif

//static void UpdateDrawFrame(void);          // Función dedicada a operar cada frame

auto &play = Game::get();


int main() {

    play.Loop();


    return 0;
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




