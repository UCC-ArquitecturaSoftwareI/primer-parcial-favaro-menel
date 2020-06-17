/**
 * @title       SoundManager class
 * @file        SoundManager.h
 * @version     1.0
 * @date        6/04/2020
 * @author      Angelo Menel
 * @author      Juan Cruz Favaro
 * @author      Emanuel Chiletti
 */
#ifndef RAYLIBTEMPLATE_SOUNDMANAGER_H
#define RAYLIBTEMPLATE_SOUNDMANAGER_H

#include <string>
#include <raylib.h>
#include <map>
/**
 * @class SoundManager
 * @brief Tree with all Game's sounds.
 */
class SoundManager {
private:
    std::map<const std::string, Music> Soundtree; /**std::map<const std::string , Music> value. Sounds tree with a string key*/

public:
    SoundManager();

    void LoadSounds(const std::string &file, const std::string &key);

    Music search(const std::string &key);

    void Play(std::string key);

    void Stop(std::string key);

    void Rewind(std::string key);

    void finish();
};

#endif //RAYLIBTEMPLATE_SOUNDMANAGER_H