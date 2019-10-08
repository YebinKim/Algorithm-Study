//
//  1260.cpp
//  Step21-DFS and BFS
//
//  Created by 김예빈 on 2019. 9. 20..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

void dfs(int, vector<int>[], bool[]);
void bfs(int, vector<int>[], bool[]);

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, m, v, v1, v2;
    
    cin >> n >> m >> v;
    
    vector<int> graph[n + 1];
    bool check[n + 1];
    fill(check, check + n + 1, false);
    
    for(int i = 0; i < m; i++) {
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    
    for(int i = 1; i <= n; i++)
        sort(graph[i].begin(), graph[i].end());
    
    dfs(v, graph, check);
    cout << "\n";
    
    fill(check, check + n + 1, false);
    bfs(v, graph, check);
    
    return 0;
}

void dfs(int start, vector<int> graph[], bool check[]) {
    check[start]= true;
    cout << start << " ";
    
    for(int i = 0; i < graph[start].size(); i++) {
        int next = graph[start][i];
        if(check[next] == false) {
            dfs(next, graph, check);
        }
    }
}

void bfs(int start, vector<int> graph[], bool check[]) {
    queue<int> q;
    
    q.push(start);
    check[start] = true;
    
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
