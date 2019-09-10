//
//  10844.cpp
//  Step12-Dynamic Programming_1
//
//  Created by 김예빈 on 2019. 9. 10..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    const int MOD = 1000000000;
    int n, sum = 0, i, j;
    
    cin >> n;
    
    int dp[n + 1][10];
    
    for(i = 0; i < 10; i++) {
        dp[0][i] = 0;
        dp[1][i] = 1;
    }
    
    dp[1][0] = 0;
    
    for(i = 2; i <= n; i++) {
        dp[i][0] = dp[i - 1][1] % MOD;
        dp[i][9] = dp[i - 1][8] % MOD;
        
        for(j = 1; j < 9; j++)
            dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % MOD;
    }
    
    for(j = 0; j < 10; j++)
        sum = (sum + dp[n][j]) % MOD;
    
    cout << sum;

    return 0;
}
