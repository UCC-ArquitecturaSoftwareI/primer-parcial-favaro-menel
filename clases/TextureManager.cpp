#include "TextureManager.h"

/**
 *  Constructor of the class TextureManager.
 */
TextureManager::TextureManager() = default;

/**
 *  It loads  textures.
 * @param file -> path of the texture.
 */
Texture2D TextureManager::LoadTextures(const std::string &file, const std::string &key) {
    Texturetree[key] = LoadTexture(file.c_str());
    return Texturetree[key];
}

/**
 *
 * @param key
 * @return
 */
Texture2D TextureManager::search(const std::string &key) {
    return Texturetree[key];
}
