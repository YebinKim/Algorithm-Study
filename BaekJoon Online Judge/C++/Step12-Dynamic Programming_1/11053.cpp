//
//  11053.cpp
//  Step12-Dynamic Programming_1
//
//  Created by Yebin Kim on 2019/10/26.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>

using namespace std;

// Time Complexity O(n^2)
// Using LIS(Longest Increasing Subsequence)
int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, max;
    int answer = 0;
    
    cin >> n;
    
    int arr[n + 1];
    int dp[n + 1];
    
    dp[0] = 0;
    
    for(int i = 1; i <= n; i++)
        cin >> arr[i];
    
    for(int i = 1; i <= n; i++) {
        max = 0;
        
        for(int j = 1; j < i; j++)
            if(arr[j] < arr[i] && max < dp[j]) {
                max = dp[j];
            }
        
        dp[i] = max + 1;
        
        if(answer < dp[i])
            answer = dp[i];
    }
    
    cout << answer;
    
    return 0;
}
