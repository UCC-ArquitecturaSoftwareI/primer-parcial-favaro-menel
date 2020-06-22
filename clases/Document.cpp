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

/**
 * Set the initial state
 * @param initial
 */
Document::Document(State *initial) {
    state = initial;
    state->setDocument(this);
}

/**
 * Maintains the current state
 */
void Document::Loop() {
    state->Loop();
}


