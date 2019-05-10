//
// Created by Benjamin Diaz on 5/10/19.
//

#ifndef PC2_ARENA_H
#define PC2_ARENA_H

#include <string>
#include <vector>
#include <iostream>
#include "Fight.h"

using namespace std;

class Arena{
    vector<Fight> fights;
public:
    Arena();
    void run (Fighter a, Fighter b);
    vector<Fight> get_fights();
    void load_fights(string file);
    void run_all();
};

#endif //PC2_ARENA_H
