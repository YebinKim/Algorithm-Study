//
//  1697.cpp
//  Step21-DFS and BFS
//
//  Created by Yebin Kim on 2020/01/15.
//  Copyright © 2020 김예빈. All rights reserved.
//

#include <iostream>
#include <deque>
using namespace std;

deque<pair<int, int>> dq;

void BFS(int, int, bool*);

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    bool visit[100001] = {0, };
    int N, K;
    cin >> N >> K;
    
    BFS(N, K, visit);
    
    cout << dq.front().second;
    
    return 0;
}

void BFS(int N, int K, bool *visit) {
    
    dq.push_back(make_pair(N, 0));
    
    while(!dq.empty()) {
        int location = dq.front().first;
        int time = dq.front().second;
        
        if(location == K) break;
        
        dq.pop_front();
        visit[location] = true;
        
        if(location + 1 <= 100000 && !visit[location + 1]) {
            dq.push_back(make_pair(location + 1, time + 1));
        }
        
        if(location - 1 >= 0 && !visit[location - 1]) {
            dq.push_back(make_pair(location - 1, time + 1));
        }
        
        if(location * 2 <= 100000 && !visit[location * 2]) {
            dq.push_back(make_pair(location * 2, time + 1));
        }
    }
}
