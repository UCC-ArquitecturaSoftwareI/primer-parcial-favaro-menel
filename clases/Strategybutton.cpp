#include "Strategybutton.h"

/**
 * Position the button depending on the state
 */
Vector2 Strategybutton::strategies() {
    if (btnstate == 0)
        return {306, 250};
    if (btnstate == 1) {
        if (pos == 0) {
            pos = 1;
            return {310, 250};
        } else {
            pos = 0;
            return {302, 250};
        }
    }

}

Strategybutton::Strategybutton() : btnstate(0), pos(0) {}

void Strategybutton::pressed(int p) {
    btnstate = p;
}
