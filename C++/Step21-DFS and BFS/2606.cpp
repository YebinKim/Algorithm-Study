//
//  2606.cpp
//  Step21-DFS and BFS
//
//  Created by 김예빈 on 2019. 9. 20..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void dfs(int, vector<int>[], bool[]);

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, m, v1, v2, result = 0;
    
    cin >> n >> m;
    
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
    
    dfs(1, graph, check);
    
    for(int i = 1; i <= n; i++)
        if(check[i])
            result++;
    
    cout << result - 1;
    
    return 0;
}

void dfs(int start, vector<int> graph[], bool check[]) {
    check[start]= true;
    
    for(int i = 0; i < graph[start].size(); i++) {
        int next = graph[start][i];
        
        if(check[next] == false) {
            dfs(next, graph, check);
        }
    }
}
