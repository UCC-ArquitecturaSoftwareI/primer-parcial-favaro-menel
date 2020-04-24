#ifndef RAYLIBTEMPLATE_RENDERER_H
#define RAYLIBTEMPLATE_RENDERER_H
#endif //RAYLIBTEMPLATE_RENDERER_H

#include <string>
#include <raylib.h>
#include "LoadData.h"

class Renderer{
private:
    LoadData ld;
public:
    Renderer();

    void drawmap();
};
