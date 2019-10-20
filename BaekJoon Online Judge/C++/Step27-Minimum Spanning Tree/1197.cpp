//
//  1197.cpp
//  Step27-Minimum Spanning Tree
//
//  Created by 김예빈 on 2019/10/20.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct edge {
    int u, v, w;
    
    edge() { };
    
    edge(int u, int v, int w) {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

int compare_comp(const edge& a, const edge& b);
int find(int parent[], int u);
void merge(int parent[], int u, int v);

// Using Kruskal algorithm
int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    vector<edge> graph;
    long long answer = 0;
    int v, e;
    int edge_a, edge_b, edge_c;
    
    cin >> v >> e;
    
    int parent[v + 1];
    
    for(int i = 1; i <= v; i++)
        parent[i] = i;
    
    for(int i = 0; i < e; i++) {
        cin >> edge_a >> edge_b >> edge_c;
        graph.push_back(edge(edge_a, edge_b, edge_c));
    }
    
    sort(graph.begin(), graph.end(), compare_comp);
    
    for(auto n : graph) {
        if(find(parent, n.v) != find(parent, n.u)) {
            merge(parent, n.u, n.v);
            answer += n.w;
        }
    }
    
    cout << answer;
    
    return 0;
}

int compare_comp(const edge& a, const edge& b) { return a.w < b.w; }

int find(int parent[], int u) {
    if(u == parent[u])
        return u;
    
    return parent[u] = find(parent, parent[u]);
}

void merge(int parent[], int u, int v) {
    u = find(parent, u);
    v = find(parent, v);
    
    parent[v] = u;
}
