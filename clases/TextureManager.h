#ifndef RAYLIBTEMPLATE_TEXTUREMANAGER_H
#define RAYLIBTEMPLATE_TEXTUREMANAGER_H


#include <string>
#include <raylib.h>


class TextureManager {
public:
    TextureManager();

    Texture2D LoadText(std::string file);
};

#endif //RAYLIBTEMPLATE_TEXTUREMANAGER_H