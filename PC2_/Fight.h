//
// Created by Benjamin Diaz on 5/10/19.
//

#ifndef PC2_FIGHT_H
#define PC2_FIGHT_H

#include "Fighter.h"

class Fight{
    Fighter* a = nullptr;
    Fighter* b = nullptr;
    Fighter* winner = nullptr;
    int score = 0;
public:
    Fight(Fighter* a, Fighter* b): a{a}, b{b} {}
};

#endif //PC2_FIGHT_H
