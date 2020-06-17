#include "SoundManager.h"
/**
 * Constructor of SoundManager.
 * Initialize the audio.
 */
SoundManager::SoundManager(){
    InitAudioDevice();
};

/**
 * Insert the music file in a tree.
 * @param file -> string music file
 * @param key -> string to search in tree.
 */
void SoundManager::LoadSounds(const std::string &file, const std::string &key) {
    Soundtree[key] = LoadMusicStream(file.c_str());
}
/**
 * Search for the music in the tree.
 * @param key -> string to search in tree.
 * @return -> music from the tree.
 */
Music SoundManager::search(const std::string &key) {
    return Soundtree[key];
}
/**
 * It plays the music that has been chosen.
 * @param key -> string to search in tree.
 */
void SoundManager::Play(std::string key) {
    PlayMusicStream(Soundtree[key]);
}
/**
 * It stop the music that has been chosen.
 * @param key -> string to search in tree.
 */
void SoundManager::Stop(std::string key) {
    UnloadMusicStream(Soundtree[key]);
}

/**
 * It finish the audio by using the function closeaudiodevice().
 */
void SoundManager::finish() {
    CloseAudioDevice();
}

/**
 * It updates the music playing.
 * @param key -> string to search in tree.
 */
void SoundManager::Rewind(std::string key) {
    UpdateMusicStream(Soundtree[key]);
}
