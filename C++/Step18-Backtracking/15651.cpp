//
//  15651.cpp
//  Step18-Backtracking
//
//  Created by 김예빈 on 2019. 9. 24..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int N, M;
vector<int> graph;

void dfs(int, vector<int>);

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    cin >> N >> M;
    
    dfs(0, graph);
    
    return 0;
}

void dfs(int start, vector<int> graph) {
    if(start == M) {
        for(int i = 0; i < graph.size(); i++)
            cout << graph[i] << " ";
        
        cout << "\n";
        return;
    }
    
    for (int i = 1; i <= N; i++) {
        graph.push_back(i);
        dfs(start + 1, graph);
        graph.pop_back();
    }
}
