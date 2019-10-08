//
//  9251.cpp
//  Step12-Dynamic Programming_1
//
//  Created by 김예빈 on 2019. 9. 14..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, result, i;
    
    cin >> n;
    
    int dp[n + 1];
    dp[0] = 0;
    
    int num[n];
    for(i = 0; i < n; i++)
        cin >> num[i];
    
    result = num[0];
    
    for(i = 0; i < n; i++)
        dp[i + 1] = (dp[i] + num[i]) > num[i] ? (dp[i] + num[i]) : num[i];
    
    for(i = 1; i <= n; i++)
        if(result < dp[i])
            result = dp[i];
    
    cout << result;
    
    return 0;
}
