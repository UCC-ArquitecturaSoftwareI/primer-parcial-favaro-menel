#ifndef RAYLIBTEMPLATE_MENU_H
#define RAYLIBTEMPLATE_MENU_H

#include "State.h"
#include "Play.h"

class menu : public State {
private:
public:
    menu();

    void Loop() override;

    ~menu() override;
};


#endif //RAYLIBTEMPLATE_MENU_H
