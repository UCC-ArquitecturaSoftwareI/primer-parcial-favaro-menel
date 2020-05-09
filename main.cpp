#include "clases/Game.h"

/*#if defined(PLATFORM_WEB) // Para crear HTML5
#include <emscripten/emscripten.h>
#endif*/

int main() {
    auto &play = Game::get();
    play.Loop();
    play.finish();
}