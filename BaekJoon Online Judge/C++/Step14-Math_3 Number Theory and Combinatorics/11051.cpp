//
//  11051.cpp
//  Step14-Math_3 Number Theory and Combinatorics
//
//  Created by 김예빈 on 2019. 9. 29..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

const int MOD = 10007;
int dp[1001][1001];

void binoCoefficient(int, int);

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, k;
    
    cin >> n >> k;
    
    dp[0][0] = dp[1][0] = 1;
    binoCoefficient(n, k);
    
    cout << dp[n][k];
    
    return 0;
}

void binoCoefficient(int n, int k) {
    for(int i = 1; i <= n; i++) {
        dp[i][1] = i;
        dp[i][i] = dp[i][0] = 1;
    }
    
    for(int i = 3; i <= n; i++) {
        for(int j = 2; j < i; j++)
            dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % MOD;
    }
}
