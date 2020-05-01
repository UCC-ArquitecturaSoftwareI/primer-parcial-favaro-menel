//#include "../cmake-build-debug/_deps/raylib-src/src/raudio.h"

#ifndef RAYLIBTEMPLATE_SOUNDMANAGER_H
#define RAYLIBTEMPLATE_SOUNDMANAGER_H

#include <string>
#include <raylib.h>
#include <map>

class SoundManager {
private:
    std::map<const std::string, Music> Soundtree;

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