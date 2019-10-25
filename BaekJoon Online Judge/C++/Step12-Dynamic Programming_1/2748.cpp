//
//  2748.cpp
//  Step12-Dynamic Programming_1
//
//  Created by Yebin Kim on 2019/10/25.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>

using namespace std;

// Time Complexity O(n)
int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n;
    
    cin >> n;
    
    long dp[n + 1];
    
    dp[0] = 0;
    dp[1] = 1;
    
    for(int i = 2; i <= n; i++)
        dp[i] = dp[i - 1] + dp[i - 2];
    
    cout << dp[n];
    
    return 0;
}
