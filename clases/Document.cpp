#include "Document.h"
/**
 * Changes the actual state of the game.
 * @param otherState -> new state.
 */
void Document::changeState(State *otherState) {
    if (state != nullptr){
        delete state;
    }
    state = otherState;
    state->setDocument(this);
}

Document::Document(State *initial) {
    state = initial;
    state->setDocument(this);
}

void Document::Loop() {
    state->Loop();
}


