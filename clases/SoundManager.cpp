#include "SoundManager.h"

SoundManager::SoundManager() = default;


void SoundManager::LoadSounds(const std::string &file, const std::string &key) {
    Soundtree[key] = LoadMusicStream(file.c_str());
}

Music SoundManager::search(const std::string &key) {
    return Soundtree[key];
}
