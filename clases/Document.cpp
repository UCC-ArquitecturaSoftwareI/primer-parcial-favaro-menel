#include "Document.h"
/**
 * Changes the actual state of the game.
 * @param otherState -> new state.
 */
void Document::changeState(State &otherState) {
    state = &otherState;
}

Document::Document() {

}
