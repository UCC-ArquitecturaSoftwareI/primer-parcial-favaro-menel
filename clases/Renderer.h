/**
 * @title       Renderer class
 * @file        Renderer.h
 * @version     1.0
 * @date        10/04/2020
 * @author      Angelo Menel
 * @author      Juan Cruz Favaro
 * @author      Emanuel Chiletti
 */
#ifndef RAYLIBTEMPLATE_RENDERER_H
#define RAYLIBTEMPLATE_RENDERER_H
/**
 * @class Renderer
 * @brief Render the game.
 */
#include <string>
#include <raylib.h>
#include "Map.h"
#include "CarFactory.h"
#include "TextureManager.h"

class Renderer {
private:
    Map *map;           /**Map value. Pointer to a Map object*/
    Car *car[5];        /**Car value[]. Pointer to a vector Car object*/
    Camera2D camera2D;  /**Camera2D value. */
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