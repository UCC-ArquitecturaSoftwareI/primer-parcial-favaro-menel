#include "../cmake-build-debug/_deps/raylib-src/src/raudio.h"

#ifndef RAYLIBTEMPLATE_SOUNDMANAGER_H
#define RAYLIBTEMPLATE_SOUNDMANAGER_H
#endif //RAYLIBTEMPLATE_SOUNDMANAGER_H

#include <string>

class SoundManager {
public:
    SoundManager();

    Music LoadSounds(std::string file);
};