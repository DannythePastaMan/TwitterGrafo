//
// Created by daniel on 4/8/18.
//

#ifndef GRAFOTWITTER_GRAPH_H
#define GRAFOTWITTER_GRAPH_H

#include <iostream>
#include "Vertice.h"
#include <vector>

class Graph {
private:
    std::vector<Vertice *> ListadeVertices;
    int cantVertices;
    friend class Vertice;
    friend class Arista;

public:
    Graph();
    void AddVertice(std::string);
    void AddArista(Vertice *, Vertice *, int);
    void AddArista(std::string, std::string, int);
    int getLista_de_Vertices();
};


#endif //GRAFOTWITTER_GRAPH_H
