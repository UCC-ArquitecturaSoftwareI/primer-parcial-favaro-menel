/**
 * @title       State class
 * @file        State.h
 * @version     1.0
 * @date        16/06/2020
 * @author      Angelo Menel
 * @author      Juan Cruz Favaro
 * @author      Emanuel Chiletti
 */

#ifndef RAYLIBTEMPLATE_STATE_H
#define RAYLIBTEMPLATE_STATE_H

#include "Document.h"

/**
 * @class State
 * @brief Abstract class of differents states of the game.
 */
class State {
protected:
    Document *document;
public:
    State() {};

    virtual void Loop() = 0;

    virtual ~State() {};

    void setDocument(Document *d) {
        document = d;
    };

};


#endif //RAYLIBTEMPLATE_STATE_H
