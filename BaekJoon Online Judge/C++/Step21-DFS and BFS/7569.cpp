//
//  7569.cpp
//  Step21-DFS and BFS
//
//  Created by Yebin Kim on 2019/12/14.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>
#include <deque>

using namespace std;

const int MAX = 100;

int dirX[6] = { 1, -1, 0, 0, 0, 0 };
int dirY[6] = { 0, 0, 1, -1, 0, 0 };
int dirZ[6] = { 0, 0, 0, 0, 1, -1 };

int N, M, H;
int tomato[MAX][MAX][MAX];
int empty;
deque<pair<pair<int, int>, int>> dq;

bool allRipe();
void BFS();

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    cin >> N >> M >> H;
    
    for(int z = 0; z < H; z++) {
        for(int y = 0; y < M; y++) {
            for(int x = 0; x < N; x++) {
                cin >> tomato[y][x][z];
                
                if (tomato[y][x][z] == 1)
                    dq.push_back(make_pair(make_pair(y, x), z));
                if (tomato[y][x][z] == -1)
                    empty++;
            }
        }
    }
    
    if(dq.size() == N * M * H - empty)
        cout << 0 << endl;
    else
        BFS();
    
    return 0;
}

bool allRipe() {
    int possible = N * M * H - empty;
    int tomatoCnt = 0;
    
    for(int z = 0; z < H; z++)
        for(int y = 0; y < M; y++)
            for(int x = 0; x < N; x++)
                if(tomato[y][x][z] == 1)
                    tomatoCnt++;
    
    return possible == tomatoCnt;
}

void BFS() {
    int day = 0;
    
    if(dq.empty()) cout << -1;
    
    while(!dq.empty()) {
        int size = dq.size();
        
        for(int i = 0; i < size; i++) {
            int x = dq.front().first.second;
            int y = dq.front().first.first;
            int z = dq.front().second;
            
            for(int j = 0; j < 6; j++) {
                int nx = x + dirX[j];
                int ny = y + dirY[j];
                int nz = z + dirZ[j];
                
                if(nx >= 0 && nx < N && ny >= 0 && ny < M && nz >= 0 && nz < H) {
                    if(tomato[ny][nx][nz] == 0) {
                        tomato[ny][nx][nz] = 1;
                        dq.push_back(make_pair(make_pair(ny, nx), nz));
                    }
                }
            }
            
            dq.pop_front();
            
            if(dq.size() == 0 && allRipe()) cout << day;
            else if(dq.size() == 0 && !allRipe()) cout << -1;
        }
        
        day++;
    }
}
