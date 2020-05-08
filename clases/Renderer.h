#ifndef RAYLIBTEMPLATE_RENDERER_H
#define RAYLIBTEMPLATE_RENDERER_H

#include <string>
#include <raylib.h>
#include "Map.h"
#include "CarFactory.h"
#include "TextureManager.h"

class Renderer {
private:
    Map *map;
    Car *car[5];
    Camera2D camera2D;
public:
    Renderer();

    void drawmap();

    void drawcar();

    void drawtext();

    void moveplayer();

    void finish();

    void camerainit();

    void cameraend();

    Map *getMap();
};

#endif //RAYLIBTEMPLATE_RENDERER_H