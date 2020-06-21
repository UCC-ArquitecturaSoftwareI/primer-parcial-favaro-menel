//
// Created by Euge on 21/06/2020.
//

#ifndef RAYLIBTEMPLATE_STRATEGYBUTTON_H
#define RAYLIBTEMPLATE_STRATEGYBUTTON_H

#include "Buttons.h"

class Strategybutton {
private:
    int strnum;
    Buttons *btn;
public:
    explicit Strategybutton(int num);

    Buttons *getBtn() const;

    void strategies();
};


#endif //RAYLIBTEMPLATE_STRATEGYBUTTON_H
