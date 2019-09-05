//
//  1018.cpp
//  Step10-Brute Force
//
//  Created by 김예빈 on 2019. 9. 5..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, m, i, j, k, l, cnt, max = 2500;
    char standard;
    
    cin >> n >> m;
    
    char chess[n][m];
    
    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
            cin >> chess[i][j];
    
    for(i = 0; i < n - 7; i++) {
        if(i + 8 > n)
            continue;
        
        for(j = 0; j < m - 7; j++) {
            if(j + 8 > m)
                continue;
            
            standard = chess[i][j];
            cnt = 0;
            
            for(k = 0; k < 8; k++) {
                for(l = 0; l < 8; l++) {
                    
                    if(k % 2 == 0) {
                        if(l % 2 == 0 && chess[i + k][j + l] != standard) {
                            cnt++;
                        }
                        else if(l % 2 == 1 && chess[i + k][j + l] == standard) {
                            cnt++;
                        }
                    } else {
                        if(l % 2 == 0 && chess[i + k][j + l] == standard) {
                            cnt++;
                        }
                        else if(l % 2 == 1 && chess[i + k][j + l] != standard) {
                            cnt++;
                        }
                    }
                }
            }
            
            cnt = cnt < (64 - cnt) ? cnt : (64 - cnt);
            
            if(max > cnt)
                max = cnt;
        }
    }
    
    cout << max;
    
    return 0;
}
