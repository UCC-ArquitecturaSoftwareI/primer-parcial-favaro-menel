#ifndef RAYLIBTEMPLATE_DOCUMENT_H
#define RAYLIBTEMPLATE_DOCUMENT_H

#include "State.h"
#include "menu.h"

/*In the context class, add a reference field of the state interface type
        and a public setter that allows
        overriding the value of that field.*/

class Document {
private:
    State *state;
public:
    explicit Document(State &initialState);

    void changeState(State otherState);
};


#endif //RAYLIBTEMPLATE_DOCUMENT_H
