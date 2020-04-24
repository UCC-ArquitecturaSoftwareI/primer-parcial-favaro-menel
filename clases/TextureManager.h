#ifndef RAYLIBTEMPLATE_TEXTUREMANAGER_H
#define RAYLIBTEMPLATE_TEXTUREMANAGER_H


#include <string>
#include <raylib.h>
#include <map>


class TextureManager {
private:
    std::map<std::string, Texture2D> Texturetree;
public:
    TextureManager();

    void LoadText(const std::string &file, const std::string &key);

    Texture2D search(const std::string &key);
};

#endif //RAYLIBTEMPLATE_TEXTUREMANAGER_H