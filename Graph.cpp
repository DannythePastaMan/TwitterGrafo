//
// Created by daniel on 4/8/18.
//

#include "Graph.h"
#include <iostream>
#include <vector>
using namespace std;

Graph::Graph() {
    cantVertices = 0;
}

void Graph::AddVertice(string tweet) {
    ListadeVertices.push_back(new Vertice(tweet, cantVertices));
    cantVertices++;
}

void Graph::AddArista(std::string verticeorigen, std::string verticedestino, int peso) {
    auto *nueva = new Arista();
    int cont = 0;
    int temporal = 0;
    for (int i = 0; i < ListadeVertices.size(); ++i) {
        if (ListadeVertices[i]->tweet == verticeorigen) {
            nueva->from = ListadeVertices[i];
            temporal = i;
            cont++;
        }

        else if(ListadeVertices[i]->tweet == verticedestino){
            nueva->to = ListadeVertices[i];
            cont++;
        }
    }
    if(cont < 2){
        return;
    }
    else{
       nueva->peso = peso;
        ListadeVertices[temporal]->aristas.push_back(nueva);
    }
}


void Graph::AddArista(Vertice *to, Vertice *from, int peso) {
    Arista *nueva = new Arista();
    nueva->from = from;
    nueva->to = to;
    nueva->peso = peso;
    from->aristas.push_back(nueva);
}

int Graph::getLista_de_Vertices() {
    return cantVertices;
}
