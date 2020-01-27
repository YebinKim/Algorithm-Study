//
//  2193.cpp
//  Step12-Dynamic Programming_1
//
//  Created by Yebin Kim on 2020/01/28.
//  Copyright © 2020 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int N;
    
    cin >> N;
    
    long long dp[N + 1];
    dp[0] = 0; dp[1] = 1;
    
    for(int i = 2; i <= N; i++)
        dp[i] = dp[i - 1] + dp[i - 2];
    
    cout << dp[N];
    
    return 0;
}
