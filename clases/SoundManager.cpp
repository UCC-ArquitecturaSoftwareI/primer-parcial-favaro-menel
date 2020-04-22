

#include "SoundManager.h"

SoundManager::SoundManager() {

}

Music SoundManager::LoadSounds(std::string file) {
    Music music;
    return music = LoadMusicStream(file.c_str());
}


