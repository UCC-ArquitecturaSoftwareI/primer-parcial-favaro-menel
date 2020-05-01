#include "TextureManager.h"

/**
 * Constructor by default.
 */
TextureManager::TextureManager() = default;

/**
 * It loads  textures.
 * @param file -> path of the texture.
 */
void TextureManager::LoadTextures(const std::string &file, const std::string &key) {
    Texturetree[key] = LoadTexture(file.c_str());
}

/**
 * Search for the texture2D in the tree.
 * @param key -> string to search in tree.
 * @return -> the Texture2D.
 */
Texture2D TextureManager::search(const std::string &key) {
    return Texturetree[key];
}
