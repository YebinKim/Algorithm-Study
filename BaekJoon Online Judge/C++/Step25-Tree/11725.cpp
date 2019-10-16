//
//  11725.cpp
//  BOJ-Test
//
//  Created by 김예빈 on 2019. 10. 16..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

const int MAX = 100000;

int answer[MAX + 1];

void DFS(vector<int>[], bool[], int);

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, node1, node2;
    vector<int> tree[MAX + 1];
    bool visited[MAX + 1];
    
    memset(visited, 0, sizeof(visited));
    
    cin >> n;
    
    for(int i = 0; i < n - 1; i++) {
        cin >> node1 >> node2;
        
        tree[node1].push_back(node2);
        tree[node2].push_back(node1);
    }
    
    DFS(tree, visited, 1);
    
    for(int i = 2; i <= n; i++)
        cout << answer[i] << "\n";
    
    return 0;
}

void DFS(vector<int> tree[], bool visited[], int nodeNum) {
    visited[nodeNum] = true;
    
    for(int i = 0; i < tree[nodeNum].size(); i++) {
        int next = tree[nodeNum][i];
        
        if(!visited[next]) {
            answer[next] = nodeNum;
            DFS(tree, visited, next);
        }
    }
}
