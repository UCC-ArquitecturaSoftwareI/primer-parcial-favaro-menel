//
// Created by Euge on 21/06/2020.
//

#ifndef RAYLIBTEMPLATE_STRATEGYBUTTON_H
#define RAYLIBTEMPLATE_STRATEGYBUTTON_H

#include "Buttons.h"
#include "Strategy.h"

class Strategybutton : public Strategy{
private:
    int btnstate;
    int pos;
public:
    Strategybutton();

    Vector2 strategies() override ;

    void pressed(int p) override;
};


#endif //RAYLIBTEMPLATE_STRATEGYBUTTON_H
