//
// Created by Benjamin Diaz on 5/10/19.
//

#ifndef PC2_ATTACK_H
#define PC2_ATTACK_H

#include "Fighter.h"

class Attack{
    int power;
public:
    Attack() = default;
    Attack(int power): power{power} {}
    int attack(){ return power; }
};

class Punch:public Attack{
public:
    Punch(Fighter &b){ b.set_power(1); }
};

class Saber:public Attack{
public:
    Saber(Fighter &b){ b.set_power(5); }
};

class Firearm: public Attack{
public:
    Firearm(Fighter &b){ b.set_power(10); }
};
#endif //PC2_ATTACK_H
