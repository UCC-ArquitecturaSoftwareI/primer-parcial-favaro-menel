//
// Created by martin on 23/6/20.
//

#ifndef RAYLIBTEMPLATE_STRATEGY_H
#define RAYLIBTEMPLATE_STRATEGY_H


class Strategy {
public:
    virtual Vector2 strategies() = 0;
    virtual void pressed(int p) = 0;
};


#endif //RAYLIBTEMPLATE_STRATEGY_H
