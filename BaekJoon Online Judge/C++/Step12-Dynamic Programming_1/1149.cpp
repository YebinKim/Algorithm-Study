//
//  1149.cpp
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
    int answer;
    
    cin >> n;
    
    int house[3][n];
    int dp[3][n];
    
    for(int i = 0; i < n; i++)
        for(int j = 0; j < 3; j++)
            cin >> house[j][i];
    
    dp[0][0] = house[0][0];
    dp[1][0] = house[1][0];
    dp[2][0] = house[2][0];
    
    for(int i = 1; i < n; i++) {
        dp[0][i] = ((dp[1][i - 1] < dp[2][i - 1]) ? dp[1][i - 1] : dp[2][i - 1]) + house[0][i];
        dp[1][i] = ((dp[0][i - 1] < dp[2][i - 1]) ? dp[0][i - 1] : dp[2][i - 1]) + house[1][i];
        dp[2][i] = ((dp[0][i - 1] < dp[1][i - 1]) ? dp[0][i - 1] : dp[1][i - 1]) + house[2][i];
    }
    
    if(dp[0][n - 1] < dp[1][n - 1]) {
        if(dp[0][n - 1] < dp[2][n - 1]) {
            answer = dp[0][n - 1];
        } else {
            answer = dp[2][n - 1];
        }
    } else {
        if (dp[1][n - 1] < dp[2][n - 1]) {
            answer = dp[1][n - 1];
        } else {
            answer = dp[2][n - 1];
        }
    }
    
    cout << answer;
    
    return 0;
}
