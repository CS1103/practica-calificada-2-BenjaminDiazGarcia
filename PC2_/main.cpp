#include <iostream>
#include <fstream>
#include "Arena.h"
#include "Fighter.h"
#include "Fight.h"
#include "Attack.h"
#include "Defense.h"
#include <assert.h>

int main() {
    Arena a;
    a.load_fights("peleas.txt");
    Fighter BL;
    Elude x1(BL);
    Armor x2(BL);

    Punch x3(BL);
    Saber x4(BL);
    Firearm x5(BL);
    assert(BL.attack() == 16);

    Fighter CN;
    Elude y1(CN);
    Shield y2(CN);
    Armor y3(CN);

    Punch y4(CN);
    Firearm y5(CN);
    assert(CN.defense() == 13);

    a.run(BL, CN);
    return 0;
}