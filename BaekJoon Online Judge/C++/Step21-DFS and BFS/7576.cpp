//
//  7576.cpp
//  Step21-DFS and BFS
//
//  Created by Yebin Kim on 2019/11/07.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>
#include <deque>
using namespace std;

const int MAX = 1000;

int dirX[4] = { 1, -1, 0, 0 };
int dirY[4] = { 0, 0, 1, -1 };

int N, M;
int tomato[MAX][MAX];
int empty;
deque<pair<int, int>> dq;

bool allRipe();
void BFS();

int main() {
    cin >> N >> M;
    
    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            cin >> tomato[i][j];
            
            if(tomato[i][j] == 1)
                dq.push_back(make_pair(i, j));
            else if(tomato[i][j] == -1)
                empty++;
        }
    }
    
    if(dq.size() == M * N - empty)
        cout << 0 << endl;
    else
        BFS();
    
    return 0;
}

bool allRipe() {
    int possible = M * N - empty;
    int tomatoCnt = 0;
    
    for(int i = 0; i < M; i++)
        for(int j = 0; j < N; j++)
            if(tomato[i][j] == 1)
                tomatoCnt++;
    
    return possible == tomatoCnt;
}

void BFS() {
    int day = 0;
    
    if(dq.empty()) cout << -1;
    
    while(!dq.empty()) {
        int size = dq.size();
        
        for(int i = 0; i < size; i++) {
            int y = dq.front().first;
            int x = dq.front().second;
            
            for(int i = 0; i < 4; i++) {
                int ny = y + dirY[i];
                int nx = x + dirX[i];
                
                if(ny >= 0 && ny < M && nx >= 0 && nx < N && tomato[ny][nx] == 0) {
                    tomato[ny][nx] = 1;
                    dq.push_back(make_pair(ny, nx));
                }
            }
            
            dq.pop_front();
            
            if(dq.size() == 0 && allRipe()) cout << day;
            else if(dq.size() == 0 && !allRipe()) cout << -1;
        }
        
        day++;
    }
}
