//
// Created by Benjamin Diaz on 5/10/19.
//

#include "Arena.h"
#include <iostream>
#include <fstream>
#include <vector>

Arena::Arena() {

}

void Arena::run(Fighter a, Fighter b) {
    int scoreA = 0;
    int scoreB = 0;
    scoreA = a.defense() - b.attack();
    scoreB = b.defense() - a.attack();
    if (scoreA > scoreB)
        cout << "Ganó A." << endl;
    else if (scoreB > scoreA)
        cout << "Ganó B." << endl;
    else
        cout << "Empate." << endl;
}

vector<Fight> Arena::get_fights() {
    return fights;
}

void Arena::load_fights(string file) {

    ifstream entrada;
    string linea;
}


void Arena::run_all() {

}
