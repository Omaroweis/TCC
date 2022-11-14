//
// Created by Omar on 13/11/2022.
//

#ifndef TCC_GRAPH_H
#define TCC_GRAPH_H
#include "vector"


class Graph {
private:
    vector< vector<Node> > graph;
    static int instances = 0;
    Graph();
public:

    static Graph create(vector<Station> stations, vector<Request>requests);

};


#endif //TCC_GRAPH_H
