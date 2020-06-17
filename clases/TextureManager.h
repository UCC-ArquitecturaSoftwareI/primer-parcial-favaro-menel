/**
 * @title       TextureManager class
 * @file        TextureManager.h
 * @version     1.0
 * @date        5/04/2020
 * @author      Angelo Menel
 * @author      Juan Cruz Favaro
 * @author      Emanuel Chiletti
 */
#ifndef RAYLIBTEMPLATE_TEXTUREMANAGER_H
#define RAYLIBTEMPLATE_TEXTUREMANAGER_H


#include <string>
#include <raylib.h>
#include <map>

/**
 * @class TextureManager
 * @brief Tree with all the Game's textures.
 */
class TextureManager {
private:
    std::map<const std::string , Texture2D> Texturetree;  /**std::map<const std::string , Texture2D> value. Textures tree with a string key*/
public:
    TextureManager();

    void LoadTextures(const std::string &file, const std::string &key);

    Texture2D search(const std::string &key);
};

#endif //RAYLIBTEMPLATE_TEXTUREMANAGER_H