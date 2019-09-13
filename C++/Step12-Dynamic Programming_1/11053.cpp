//
//  11053.cpp
//  Step12-Dynamic Programming_1
//
//  Created by 김예빈 on 2019. 9. 11..
//  Copyright © 2019년 김예빈. All rights reserved.
//

// Using LIS(Longest Increasing Subsequence)
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, max, result = 0, i, j;
    
    cin >> n;
    
    int A[n + 1];
    int dp[n + 1];
    dp[0] = 0;
    
    for(i = 1; i <= n; i++)
        cin >> A[i];
    
    for(i = 1; i <= n; i++) {
        max = 0;
        
        for(j = 0; j < i; j++)
            if(A[i] > A[j]) {
                if (max < dp[j])
                    max = dp[j];
            }
        
        dp[i] = max + 1;
        
        if(result < dp[i])
            result = dp[i];
    }
    
    cout << result;
    
    return 0;
}
