//
//  11054.cpp
//  Step12-Dynamic Programming_1
//
//  Created by 김예빈 on 2019. 9. 12..
//  Copyright © 2019년 김예빈. All rights reserved.
//

// Using LIS(Longest Increasing Subsequence)
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, asec_max, desc_max, result = 0, i, j;
    
    cin >> n;
    
    int A[n + 1];
    int asec_dp[n + 1];
    int desc_dp[n + 1];
    asec_dp[0] = 0;
    desc_dp[0] = 0;
    
    for(i = 1; i <= n; i++)
        cin >> A[i];
    
    for(i = 1; i <= n; i++) {
        asec_max = 0;
        
        for(j = 0; j < i; j++)
            if(A[i] > A[j]) {
                if (asec_max < asec_dp[j])
                    asec_max = asec_dp[j];
            }
        
        asec_dp[i] = asec_max + 1;
        
        if(asec_max < asec_dp[i])
            asec_max = asec_dp[i];
    }
    
    for(i = n; i >= 0; i--) {
        desc_max = 0;
        
        for(j = n; j > i; j--)
            if(A[i] > A[j]) {
                if (desc_max < desc_dp[j])
                    desc_max = desc_dp[j];
            }
        
        desc_dp[i] = desc_max + 1;
        
        if(desc_max < desc_dp[i])
            desc_max = desc_dp[i];
    }
    
    for (i = 1; i <= n; i++)
        if (result < asec_dp[i] + desc_dp[i])
            result = asec_dp[i] + desc_dp[i];
    
    result -= 1;
    
    cout << result;
    
    return 0;
}
