

#include "SoundManager.h"

SoundManager::SoundManager() = default;


Music SoundManager::LoadSounds(const std::string &file, const std::string &key) {
    Soundtree[key] = LoadMusicStream(file.c_str());
    return Soundtree[key];
}

Music SoundManager::search(const std::string &key) {
    return Soundtree[key];
}
