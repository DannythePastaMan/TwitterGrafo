//
// Created by daniel on 4/8/18.
//

#include "Vertice.h"
#include <iostream>

using namespace std;

Vertice::Vertice(std::string tweet, int ID) {
    this->ID = ID;
    this->tweet = tweet;
}

std::vector<Arista *> Vertice::adj() {
    return aristas;
}
