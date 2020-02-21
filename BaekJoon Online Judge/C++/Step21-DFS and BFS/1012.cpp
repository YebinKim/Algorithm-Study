//
//  1012.cpp
//  Step21-DFS and BFS
//
//  Created by Yebin Kim on 2020/02/21.
//  Copyright © 2020 김예빈. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

bool check[50][50];
int m, n, k, field[50][50];

void dfs(int, int);

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int tc, x, y, cnt;
    
    cin >> tc;
    
    while(tc--) {
        cin >> m >> n >> k;
        
        cnt = 0;
        memset(check, false, sizeof(check));
        memset(field, 0, sizeof(field));
        
        for(int j = 0; j < k; j++) {
            cin >> x >> y;
            field[y][x] = 1;
        }
        
        for(int j = 0; j < n; j++)
            for(int k = 0; k < m; k++)
                if(field[j][k] && check[j][k] == false) {
                    dfs(j, k);
                    cnt++;
                }
        
        cout << cnt << endl;
    }
    
    return 0;
}

void dfs(int y, int x) {
    int dx[4] = { 0, 0, 1, -1 };
    int dy[4] = { 1, -1, 0, 0 };
    
    if(check[y][x]) return;
    check[y][x] = true;
    
    for(int i = 0; i < 4; i++) {
        int nextX = x + dx[i];
        int nextY = y + dy[i];
        
        if(nextY >= 0 && nextY < n && nextX >= 0 && nextX < m)
            if(field[nextY][nextX])
                dfs(nextY, nextX);
    }
}
