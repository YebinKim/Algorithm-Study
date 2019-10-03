//
//  2178.cpp
//  Step21-DFS and BFS
//
//  Created by 김예빈 on 2019. 10. 3..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <queue>
using namespace std;

queue<pair<int, int>> check_q;
int n, m, maze[100][100];
int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };

void bfs();

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    
    scanf("%d", &n);
    scanf("%d", &m);
    
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            scanf("%1d", &maze[i][j]);
    
    check_q.push(make_pair(0, 0));
    bfs();
    
    printf("%d", maze[n - 1][m - 1]);
    
    return 0;
}

void bfs() {
    int nextX, nextY;
    pair<int, int> current;
    
    while(!check_q.empty()){
        current = check_q.front();
        check_q.pop();
        
        for(int i = 0; i < 4; i++) {
            nextX = current.second + dx[i];
            nextY = current.first + dy[i];
            
            if(nextX >= 0 && nextX < m && nextY >= 0 && nextY < n && maze[nextY][nextX] == 1) {
                check_q.push(make_pair(nextY, nextX));
                maze[nextY][nextX] = maze[current.first][current.second] + 1;
            }
        }
    }
}
