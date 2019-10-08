//
//  2579.cpp
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
    
    int step[n];
    int dp[n];
    
    for(i = 0; i < n; i++)
        cin >> step[i];
    
    dp[0] = step[0];
    dp[1] = step[0] + step[1] > step[1] ? step[0] + step[1] : step[1];
    dp[2] = step[0] + step[2] > step[1] + step[2] ? step[0] + step[2] : step[1] + step[2];
    
    for(i = 3; i < n; i++)
        dp[i] = (dp[i - 3] + step[i - 1] > dp[i - 2] ? dp[i - 3] + step[i - 1] : dp[i - 2]) + step[i];
    
    cout << dp[n - 1];
    
    return 0;
}
