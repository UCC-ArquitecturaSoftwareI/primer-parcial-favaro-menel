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

#include "State.h"
#include "menu.h"

/*In the context class, add a reference field of the state interface type
        and a public setter that allows
        overriding the value of that field.*/

/**
 * @class Document
 * @brief Works changing states to states.
 */
class Document {
private:
    State *state;   /**State value. Pointer to a State object*/
public:
    Document();

    void changeState(State &otherState);
};


#endif //RAYLIBTEMPLATE_DOCUMENT_H
