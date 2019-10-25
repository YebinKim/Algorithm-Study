//
//  1003.cpp
//  Step12-Dynamic Programming_1
//
//  Created by Yebin Kim on 2019/10/25.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>

using namespace std;

int dp[2][41] = { 0, };

void fibonacci(int);

// Time Complexity O(n)
int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int tc, n;
    
    cin >> tc;
    
    while(tc--) {
        cin >> n;
        fibonacci(n);
    }
    
    return 0;
}

void fibonacci(int n) {
    dp[0][0] = 1;
    dp[1][1] = 1;
    
    for(int i = 2; i <= n; i++) {
        dp[0][i] = dp[0][i - 1] + dp[0][i - 2];
        dp[1][i] = dp[1][i - 1] + dp[1][i - 2];
    }
    
    cout << dp[0][n] << " " << dp[1][n] << "\n";
}
