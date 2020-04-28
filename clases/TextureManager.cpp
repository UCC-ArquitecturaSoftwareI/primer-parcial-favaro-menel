#include "TextureManager.h"

/**
 *  Constructor of the class TextureManager.
 */
TextureManager::TextureManager() = default;

/**
 *  It loads  textures.
 * @param file -> path of the texture.
 */
void TextureManager::LoadTextures(const std::string &file, const std::string &key) {
    Texturetree[key] = LoadTexture(file.c_str());
}

/**
 *
 * @param key
 * @return
 */
Texture2D TextureManager::search(const std::string &key) {
    return Texturetree[key];
}
