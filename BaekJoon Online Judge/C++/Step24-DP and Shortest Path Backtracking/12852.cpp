//
//  12852.cpp
//  Step24-DP and Shortest Path Backtracking
//
//  Created by 김예빈 on 2019. 10. 14..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <limits.h>

using namespace std;

const int INF = 987654321;
const int MAX = 1000000;

int dp[MAX + 1], n;

void tracking(int);

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    cin >> n;
    
    fill(dp, dp + MAX + 1, INF);
    dp[1] = 0;
    
    for(int i = 1; i <= n; i++) {
        if(!(i % 3) && dp[i / 3] != INF)
            dp[i] = min(dp[i / 3] + 1, dp[i]);
        
        if(!(i % 2) && dp[i / 2] != INF)
            dp[i] = min(dp[i / 2] + 1, dp[i]);
        
        if(dp[i - 1] != INF)
            dp[i] = min(dp[i - 1] + 1, dp[i]);
    }
    
    cout << dp[n] << "\n";
    tracking(n);
    
    return 0;
}

void tracking(int here) {
    if(here == 0) return;
    
    cout << here << " ";
    
    if(here % 3 == 0 && dp[here] == (dp[here / 3] + 1))
        tracking(here / 3);
    else if(here % 2 == 0 && dp[here] == (dp[here / 2] + 1))
        tracking(here / 2);
    else if((here - 1 >= 0) && (dp[here] == (dp[here - 1] + 1)))
        tracking(here - 1);
    
    return;
}
