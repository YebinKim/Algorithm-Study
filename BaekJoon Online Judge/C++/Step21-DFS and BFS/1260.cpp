//
//  1260.cpp
//  Step21-DFS and BFS
//
//  Created by Yebin Kim on 2020/02/12.
//  Copyright © 2020 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cstring>
using namespace std;

void dfs(int, vector<int>[], bool[]);
void bfs(int, vector<int>[], bool[]);

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, m, start;
    cin >> n >> m >> start;
    
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
    cout << "\n";
    
    memset(check, false, sizeof(check));
    bfs(start, graph, check);
    
    return 0;
}

void dfs(int start, vector<int> graph[], bool check[]) {
    check[start]= true;
    cout << start << " ";
    
    for(int i = 0; i < graph[start].size(); i++) {
        int next = graph[start][i];
        
        if(check[next] == false)
            dfs(next, graph, check);
    }
}

void bfs(int start, vector<int> graph[], bool check[]) {
    queue<int> q;
    check[start] = true;
    q.push(start);
    
    while(!q.empty()){
        int temp = q.front();
        q.pop();
        cout << temp << " ";
        
        for(int i = 0; i < graph[temp].size(); i++) {
            if(check[graph[temp][i]] == false) {
                q.push(graph[temp][i]);
                check[graph[temp][i]] = true;
            }
        }
    }
}
