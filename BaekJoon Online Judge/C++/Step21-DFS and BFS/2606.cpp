//
//  2606.cpp
//  Step21-DFS and BFS
//
//  Created by Yebin Kim on 2020/02/13.
//  Copyright © 2020 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

void dfs(int, vector<int>[], bool[]);

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, m, start = 1, result = 0;
    
    cin >> n >> m;
    
    vector<int> graph[n + 1];
    bool check[n + 1];
    memset(check, false, sizeof(check));
    
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    
    for(int i = 1; i <= n; i++)
        sort(graph[i].begin(), graph[i].end());
    
    dfs(start, graph, check);
    
    for(int i = 1; i <= n; i++)
        if(check[i])
            result++;
    
    cout << result - 1;
    
    return 0;
}

void dfs(int start, vector<int> graph[], bool check[]) {
    check[start] = true;
    
    for(int i = 0; i < graph[start].size(); i++) {
        int next = graph[start][i];
        
        if(check[next] == false)
            dfs(next, graph, check);
    }
}
