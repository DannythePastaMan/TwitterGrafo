//
// Created by daniel on 4/8/18.
//

#ifndef GRAFOTWITTER_ARISTA_H
#define GRAFOTWITTER_ARISTA_H

#include <iostream>
#include "Vertice.h"

class Arista {

private:
    int peso;
    Vertice *from;
    Vertice *to;
    friend class Vertice;
    friend class Graph;

public:
    Arista();
    Arista(Vertice *, Vertice *, int);
    Vertice *getTo();
    Vertice *getFrom();
};


#endif //GRAFOTWITTER_ARISTA_H
