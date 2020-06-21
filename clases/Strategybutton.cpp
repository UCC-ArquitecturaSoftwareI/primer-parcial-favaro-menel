//
// Created by Euge on 21/06/2020.
//

#include "Strategybutton.h"

Strategybutton::Strategybutton(int num) {
    strnum = num;
    btn = new Buttons;
}

Buttons *Strategybutton::getBtn() const {
    return btn;
}

void Strategybutton::strategies() {
    if (btn->getBtnstate() == 0)
        btn->drawstart({306, 250});
    if (btn->getBtnstate() == 1)
        btn->drawstart({400, 250});


}
