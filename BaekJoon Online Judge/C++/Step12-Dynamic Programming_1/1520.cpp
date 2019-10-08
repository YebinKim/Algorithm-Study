//
//  1520.cpp
//  Step12-Dynamic Programming_1
//
//  Created by 김예빈 on 2019. 9. 17..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <string.h>
using namespace std;

int map[501][501];
int dp[501][501];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};
int width, height;

int DFS(int, int);

// Using DFS and DP
int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int i, j;
    memset(map, 0, sizeof(map));
    memset(dp, -1, sizeof(dp));
    
    cin >> width >> height;
    
    for(i = 0; i < width; i++)
        for(j = 0; j < height; j++)
            cin >> map[i][j];
    
    cout << DFS(width - 1, height - 1) << "\n";
    
    return 0;
}

int DFS(int x, int y) {
    if (x == 0 && y == 0)
        return 1;
    
    if (dp[x][y] != -1)
        return dp[x][y];
    
    if (x < 0 || width <= x || y < 0 || height <= y)
        return 0;
    
    dp[x][y] = 0;
    
    for(int i = 0; i < 4; i++) {
        int nextX = x + dx[i];
        int nextY = y + dy[i];
        
        if (map[nextX][nextY] > map[x][y])
            dp[x][y] += DFS(nextX, nextY);
    }
    
    return dp[x][y];
}
