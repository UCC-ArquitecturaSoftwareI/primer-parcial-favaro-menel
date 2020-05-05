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
    Camera2D camera2D;
public:
    Renderer();

    void drawmap();

    void drawplayer();

    void drawenemies();

    void drawtext();

    void finish();

    void camerainit();

    void cameraend();

    Map *getMap();

    Car *getCar();
};

#endif //RAYLIBTEMPLATE_RENDERER_H