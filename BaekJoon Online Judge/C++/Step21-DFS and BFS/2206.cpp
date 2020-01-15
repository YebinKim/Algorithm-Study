//
//  2206.cpp
//  Step21-DFS and BFS
//
//  Created by Yebin Kim on 2020/01/16.
//  Copyright © 2020 김예빈. All rights reserved.
//

#include <iostream>
#include <deque>
using namespace std;

int BFS(int, int, int[][1000]);

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int N, M;
    cin >> N >> M;
    
    int map[1000][1000];
    
    for(int i = 0; i < N; i++) {
        string str;
        cin >> str;
        
        for(int j = 0; j < M; j++) {
            int num = str[j] - '0';
            map[i][j] = num;
        }
    }
    
    cout << BFS(N, M, map);
    
    return 0;
}

int BFS(int N, int M, int map[][1000]) {
    
    int dx[] = { 0, 0, 1, -1 };
    int dy[] = { 1, -1, 0, 0 };
    
    bool visit[1000][1000][2];
    visit[0][0][0] = true;
    
    deque<pair<pair<int, int>, pair<int, int>>> dq;
    dq.push_back(make_pair(make_pair(0, 0), make_pair(0, 1)));
    
    while(!dq.empty()) {
        
        int x = dq.front().first.first;
        int y = dq.front().first.second;
        int wall = dq.front().second.first;
        int cnt = dq.front().second.second;
        dq.pop_front();
        
        if(x == N - 1 && y == M - 1)
            return cnt;
        
        for(int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if(nx >= 0 && nx < N && ny >= 0 && ny < M) {
                if(map[nx][ny] == 1 && wall == 0) {
                    visit[nx][ny][wall + 1] = true;
                    dq.push_back(make_pair(make_pair(nx, ny), make_pair(wall + 1, cnt + 1)));
                } else if(map[nx][ny] == 0 && visit[nx][ny][wall] == false) {
                    visit[nx][ny][wall] = true;
                    dq.push_back(make_pair(make_pair(nx, ny), make_pair(wall, cnt + 1)));
                }
            }
            
        }
    }
    
    return -1;
}
