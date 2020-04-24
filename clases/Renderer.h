#ifndef RAYLIBTEMPLATE_RENDERER_H
#define RAYLIBTEMPLATE_RENDERER_H
#endif //RAYLIBTEMPLATE_RENDERER_H

#include <string>
#include <raylib.h>
#include "Map.h"
class Renderer{
private:
    Map map;
public:
    Renderer();

    void drawmap();

    void drawplayer();

    void drawenemies();
};
