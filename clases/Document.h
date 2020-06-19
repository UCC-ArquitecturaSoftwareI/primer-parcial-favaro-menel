/**
 * @title       Document class
 * @file        Document.h
 * @version     1.0
 * @date        16/06/2020
 * @author      Angelo Menel
 * @author      Juan Cruz Favaro
 * @author      Emanuel Chiletti
 */

#ifndef RAYLIBTEMPLATE_DOCUMENT_H
#define RAYLIBTEMPLATE_DOCUMENT_H

#include "menu.h"
#include "State.h"


/**
 * @class Document
 * @brief Works changing states to states.
 */
class Document {
private:
    State *state;   /**State value. Pointer to a State object*/
public:
    Document(State *intial);

    void changeState(State *otherState);

    void Loop();
};


#endif //RAYLIBTEMPLATE_DOCUMENT_H
