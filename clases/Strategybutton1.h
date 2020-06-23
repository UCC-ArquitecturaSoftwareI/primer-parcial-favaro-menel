//
// Created by Euge on 21/06/2020.
//

#ifndef RAYLIBTEMPLATE_STRATEGYBUTTON1_H
#define RAYLIBTEMPLATE_STRATEGYBUTTON1_H

#include "Buttons.h"
#include "Strategy.h"

class Strategybutton1 : public Strategy{
private:
    int btnstate;
    int pos;
public:
    Strategybutton1();

    Vector2 strategies() override ;

    void pressed(int p) override;
};


#endif //RAYLIBTEMPLATE_STRATEGYBUTTON_H
