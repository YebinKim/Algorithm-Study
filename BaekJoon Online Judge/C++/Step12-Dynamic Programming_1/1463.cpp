//
//  1463.cpp
//  Step12-Dynamic Programming_1
//
//  Created by 김예빈 on 2019. 9. 10..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

// using memoization
int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n;
    
    cin >> n;
    
    int dp[n + 1];
    
    dp[0] = dp[1] = 0;
    
    for(int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + 1;
        
        if(i % 2 == 0)
            dp[i] = dp[i] < dp[i / 2] + 1 ? dp[i] : dp[i / 2] + 1;
        
        if(i % 3 == 0)
            dp[i] = dp[i] < dp[i / 3] + 1 ? dp[i] : dp[i / 3] + 1;
    }
    
    cout << dp[n];
    
    return 0;
}
