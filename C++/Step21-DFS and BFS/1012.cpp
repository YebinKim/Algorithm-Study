//
//  1012.cpp
//  Step21-DFS and BFS
//
//  Created by 김예빈 on 2019. 9. 30..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

bool check[50][50];
int m, n, k, field[50][50];
int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };

void dfs(int y, int x) {
    if(check[y][x]) return;
    
    check[y][x] = true;
    
    for(int i = 0; i < 4; i++) {
        int nextX = x + dx[i];
        int nextY = y + dy[i];
        
        if (0 <= nextY && nextY < n && 0 <= nextX && nextX < m)
            if (field[nextY][nextX])
                dfs(nextY, nextX);
    }
}

int main(int argc, const char * argv[]) {
    int t, x, y, cnt;
    
    cin >> t;
    
    while(t--) {
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
