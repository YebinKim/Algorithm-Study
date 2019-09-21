//
//  15650.cpp
//  Step18-Backtracking
//
//  Created by 김예빈 on 2019. 9. 21..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int N, M;
vector<int> graph;
bool visit[9];

void dfs(int, int, vector<int>, bool[]);

// combination
int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    cin >> N >> M;
    
    dfs(0, 0, graph, visit);
    
    return 0;
}

void dfs(int idx, int start, vector<int> graph, bool visit[]) {
    if(start == M) {
        for(int i = 0; i < graph.size(); i++)
            cout << graph[i] << " ";
        
        cout << "\n";
        return;
    }
    
    for (int i = idx; i < N; i++) {
        if (visit[i] == true) continue;
        
        visit[i] = true;
        graph.push_back(i + 1);
        
        dfs(i, start + 1, graph, visit);
        
        visit[i] = false;
        graph.pop_back();
    }
}
