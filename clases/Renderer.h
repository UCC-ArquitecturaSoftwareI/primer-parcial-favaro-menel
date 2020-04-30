#ifndef RAYLIBTEMPLATE_RENDERER_H
#define RAYLIBTEMPLATE_RENDERER_H

#include <string>
#include <raylib.h>
#include "Map.h"
#include "Car.h"
#include "TextureManager.h"


class Renderer {
private:
    Map *map;
    Car *car;
public:
    Renderer();

    void drawmap();

    void drawplayer();

    void drawenemies();

    void drawtext();

    void finish();

    Map *getMap() const;
};

#endif //RAYLIBTEMPLATE_RENDERER_H