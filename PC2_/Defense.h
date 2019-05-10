//
// Created by Benjamin Diaz on 5/10/19.
//

#ifndef PC2_DEFENSE_H
#define PC2_DEFENSE_H

#include "Fighter.h"

class Defense{
    int level;
public:
    Defense() = default;
    Defense(int level):level{level} {}
    int defense(){ return level; }
};

class Elude: public Defense{
public:
    Elude(Fighter &a){ a.set_level(1); }
};

class Shield: public Defense{
public:
    Shield(Fighter &a){ a.set_level(4); }
};

class Armor: public Defense{
public:
    Armor(Fighter &a){ a.set_level(8); }
};

#endif //PC2_DEFENSE_H
