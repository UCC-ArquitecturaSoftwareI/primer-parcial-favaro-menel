#include "clases/Document.h"
#include "clases/menu.h"
#include "clases/Play.h"


#if defined(PLATFORM_WEB) // Para crear HTML5
#include <emscripten/emscripten.h>
#endif

int main() {
    InitWindow(1000, 600, "Tuned Cars - Reto en Carlos Paz");
    SetTargetFPS(60);
    Document documento(new menu);
    while (!WindowShouldClose()) {
        documento.Loop();
    }
    CloseWindow();
}