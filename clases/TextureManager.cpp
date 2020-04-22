#include "TextureManager.h"

/**
 *  Constructor of the class TextureManager.
 */
TextureManager::TextureManager() = default;

/**
 *  It can load  textures.
 * @param file -> path of the texture.
 */

Texture2D TextureManager::LoadText(std::string file) {
    Texture2D text2D;
    text2D = LoadTexture(file.c_str());
    return text2D;
}
