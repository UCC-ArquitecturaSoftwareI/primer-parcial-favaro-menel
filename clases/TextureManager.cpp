#include "TextureManager.h"

/**
 *  Constructor of the class TextureManager.
 */
TextureManager::TextureManager() = default;

/**
 *  It loads  textures.
 * @param file -> path of the texture.
 */

void TextureManager::LoadText(const std::string &file, const std::string &key) {
    Texturetree[key] = LoadTexture(file.c_str());
}

Texture2D TextureManager::search(const std::string &key) {
    return Texturetree[key];
}
