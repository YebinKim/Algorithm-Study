//
//  2156.cpp
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
    
    int n, i;
    
    cin >> n;
    
    int wine[n];
    int dp[n];
    
    for(i = 0; i < n; i++)
        cin >> wine[i];
    
    dp[0] = wine[0];
    dp[1] = wine[0] + wine[1] > wine[1] ? wine[0] + wine[1] : wine[1];
    dp[2] = wine[0] + wine[2] > wine[1] + wine[2] ? wine[0] + wine[2] : wine[1] + wine[2];
    
    dp[2] = dp[1] > dp[2] ? dp[1] : dp[2];
    
    for(i = 3; i < n; i++) {
        dp[i] = (dp[i - 3] + wine[i - 1] > dp[i - 2] ? dp[i - 3] + wine[i - 1] : dp[i - 2]) + wine[i];
        dp[i] = dp[i - 1] > dp[i] ? dp[i - 1] : dp[i];
    }

    cout << dp[n - 1];
    
    return 0;
}
