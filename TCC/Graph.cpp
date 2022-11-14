//
// Created by Omar on 13/11/2022.
//

#include "Graph.h"

public static Graph create(vector<Station> stations, vector<Request>requests){
    if(Graph.instances > 0){
        throw "Graph Class is singleton";
    }
    Graph G = new Graph();

}
