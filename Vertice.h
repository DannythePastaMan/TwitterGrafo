//
// Created by daniel on 4/8/18.
//

#ifndef GRAFOTWITTER_VERTICE_H
#define GRAFOTWITTER_VERTICE_H

#include <iostream>
#include <vector>
#include "Arista.h"

class Vertice {

private:
    int ID;
    std::string tweet;
    std::vector<Arista *> aristas;
    friend class Arista;
    friend class Graph;

public:
    Vertice(std::string, int);
    std::vector<Arista *>adj();
};


#endif //GRAFOTWITTER_VERTICE_H
