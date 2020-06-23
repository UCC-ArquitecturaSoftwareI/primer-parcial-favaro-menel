#include "Strategybutton1.h"

/**
 * Position the button depending on the state
 */
Vector2 Strategybutton1::strategies() {
    if (btnstate == 0)
        return {306, 250};
    if (btnstate == 1) {
        if (pos == 0) {
            pos = 1;
            return {306, 254};
        } else {
            pos = 0;
            return {306, 246};
        }
    }

}

Strategybutton1::Strategybutton1() : btnstate(0), pos(0) {}

void Strategybutton1::pressed(int p) {
    btnstate = p;
}
