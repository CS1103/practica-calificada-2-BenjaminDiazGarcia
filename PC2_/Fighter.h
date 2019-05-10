//
// Created by Benjamin Diaz on 5/10/19.
//

#ifndef PC2_FIGHTER_H
#define PC2_FIGHTER_H

#include <iostream>

using namespace std;

class Fighter{
private:
    int level = 0;
    int power = 0;
public:
    Fighter():level{0}, power{0}{};
     int attack(){ return power; }
     int defense() { return level; }

    void set_level(int a){
        this->level += a;
    }

    void set_power(int b){
        this->power += b;
    }
};

#endif //PC2_FIGHTER_H
