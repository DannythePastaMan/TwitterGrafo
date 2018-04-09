//
// Created by daniel on 4/8/18.
//

#include "Arista.h"
#include <iostream>

using namespace std;

Arista::Arista() {

}

Arista::Arista(Vertice *from, Vertice *to, int peso) {
    this->from = from;
    this->to = to;
    this->peso = peso;
}

Vertice *Arista::getTo() {
    return to;
}

Vertice *Arista::getFrom() {
    return from;
}
