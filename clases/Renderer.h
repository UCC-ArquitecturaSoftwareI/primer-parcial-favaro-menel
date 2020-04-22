#ifndef RAYLIBTEMPLATE_RENDERER_H
#define RAYLIBTEMPLATE_RENDERER_H
#endif //RAYLIBTEMPLATE_RENDERER_H

#include <string>
#include <raylib.h>
#include "TextureManager.h"
#include "Map.h"

class Renderer : public TextureManager {
private:
    Map map_tex(txt);
public:
    Renderer();

    void LoadText(const char *file);
};
