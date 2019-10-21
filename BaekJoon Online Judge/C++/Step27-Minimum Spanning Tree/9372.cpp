//
//  9372.cpp
//  Step27-Minimum Spanning Tree
//
//  Created by Yebin Kim on 2019/10/21.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

struct edge {
    int u, v, w;
    
    edge() { };
    
    edge(int u, int v) {
        this->u = u;
        this->v = v;
    }
};

int find(int parent[], int u);

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int tc, n, m;
    cin >> tc;
    
    while(tc--) {
        cin >> n >> m;
        
        vector<edge> graph;
        int answer = 0;
        int edge_a, edge_b;
        
        int parent[n + 1];
        
        for(int i = 1; i <= n; i++)
            parent[i] = i;
        
        for(int i = 0; i < m; i++) {
            cin >> edge_a >> edge_b;
            graph.push_back(edge(edge_a, edge_b));
        }
        
        for(int i = 0; i < m; i++) {
            int p1 = find(parent, graph[i].u);
            int p2 = find(parent, graph[i].v);
            
            if(p1 != p2) {
                parent[p1] = p2;
                answer++;
            }
        }
        
        cout << answer << endl;
    }
    
    return 0;
}

int find(int parent[], int u) {
    if(u == parent[u])
        return u;
    
    return parent[u] = find(parent, parent[u]);
}
