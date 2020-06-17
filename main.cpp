#include "clases/Document.h"
#include "clases/State.h"


/*#if defined(PLATFORM_WEB) // Para crear HTML5
#include <emscripten/emscripten.h>
#endif*/

int main() {
    State *estado;
    Document documento;

    documento.changeState(*estado);

}