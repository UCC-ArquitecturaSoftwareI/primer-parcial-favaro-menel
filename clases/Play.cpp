//
// Created by Euge on 19/06/2020.
//

#include "Play.h"

Play::Play() {
    game = Game::get();
}

void Play::Loop() {
    int i = game->UpdateDrawFrame();
    if (i == 1) {
        document->changeState(new menu);
    }
}

Play::~Play() {

}

