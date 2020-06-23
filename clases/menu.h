#ifndef RAYLIBTEMPLATE_MENU_H
#define RAYLIBTEMPLATE_MENU_H

#include "State.h"
#include "Strategybutton.h"


class menu : public State {
private:
    Buttons *strbtn;
public:
    menu();

    void Loop() override;

    ~menu() override;
};


#endif //RAYLIBTEMPLATE_MENU_H
