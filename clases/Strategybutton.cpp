#include "Strategybutton.h"

/**
 * Generates the button strategy
 * @param num
 */
Strategybutton::Strategybutton(int num) {
    strnum = num;
    btn = new Buttons;
}

/**
 *
 * @return btn
 */
Buttons *Strategybutton::getBtn() const {
    return btn;
}

/**
 * Position the button depending on the state
 */
void Strategybutton::strategies() {
    if (btn->getBtnstate() == 0)
        btn->drawstart({306, 250});
    if (btn->getBtnstate() == 1)
        btn->drawstart({400, 250});
}
