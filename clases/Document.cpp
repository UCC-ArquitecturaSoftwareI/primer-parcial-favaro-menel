#include "Document.h"

Document::Document(State &initialState) {
    state = &initialState;
}

void Document::changeState(State otherState) {
    state = &otherState;
}
