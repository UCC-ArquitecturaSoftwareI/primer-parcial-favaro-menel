#include "SoundManager.h"

SoundManager::SoundManager(){
    InitAudioDevice();
};


void SoundManager::LoadSounds(const std::string &file, const std::string &key) {
    Soundtree[key] = LoadMusicStream(file.c_str());
}

Music SoundManager::search(const std::string &key) {
    return Soundtree[key];
}

void SoundManager::Play(std::string key) {
    PlayMusicStream(Soundtree[key]);
}

void SoundManager::Stop(std::string key) {
    UnloadMusicStream(Soundtree[key]);
}

void SoundManager::finish() {
    CloseAudioDevice();
}

void SoundManager::Rewind(std::string key) {
    UpdateMusicStream(Soundtree[key]);
}
