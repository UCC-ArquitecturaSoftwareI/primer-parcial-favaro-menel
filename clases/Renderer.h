#ifndef RAYLIBTEMPLATE_RENDERER_H
#define RAYLIBTEMPLATE_RENDERER_H

#include <string>
#include <raylib.h>
#include "Map.h"
#include "Enemies.h"
#include "Jugador.h"
#include "TextureManager.h"

class Renderer {
private:
    Map *map;
    Enemies *enemies;
    Player *player;
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

    Enemies *getEnemies() const;
};

#endif //RAYLIBTEMPLATE_RENDERER_H