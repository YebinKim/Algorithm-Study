//
//  2775.cpp
//  Step08-Math_1 Mathematical Thinking
//
//  Created by Yebin Kim on 2019/10/23.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>

using namespace std;

// Time Complexity O(1)
int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int tc, k, n, i, j;
    int room[15][15];
    
    for(i = 1; i < 15; i++) {
        room[0][i] = i + 1;
        room[i][0] = 1;
    }
    
    for(i = 1; i < 15; i++)
        for(j = 1; j < 15; j++)
            room[i][j] = room[i][j - 1] + room[i - 1][j];
    
    cin >> tc;
    
    while(tc--) {
        cin >> k >> n;
        cout << room[k][n - 1] << "\n";
    }
    
    return 0;
}
