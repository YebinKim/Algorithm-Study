//
//  11054.cpp
//  Step12-Dynamic Programming_1
//
//  Created by Yebin Kim on 2019/10/26.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>

using namespace std;

// Time Complexity O(n^2)
// Using LIS(Longest Increasing Subsequence) - Bitonic Subsequence
int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, asec_max, desc_max;
    int answer = 0;
    
    cin >> n;
    
    int arr[n + 1];
    int asec_dp[n + 1], desc_dp[n + 1];
    
    asec_dp[0] = desc_dp[0] = 0;
    
    for(int i = 1; i <= n; i++)
        cin >> arr[i];
    
    for(int i = 1; i <= n; i++) {
        asec_max = 0;
        
        for(int j = 1; j < i; j++)
            if(arr[i] > arr[j]) {
                if (asec_max < asec_dp[j])
                    asec_max = asec_dp[j];
            }
        
        asec_dp[i] = asec_max + 1;
        
        if(asec_max < asec_dp[i])
            asec_max = asec_dp[i];
    }
    
    for(int i = n; i >= 1; i--) {
        desc_max = 0;
        
        for(int j = n; j > i; j--)
            if(arr[i] > arr[j]) {
                if (desc_max < desc_dp[j])
                    desc_max = desc_dp[j];
            }
        
        desc_dp[i] = desc_max + 1;
        
        if(desc_max < desc_dp[i])
            desc_max = desc_dp[i];
    }
    
    for(int i = 1; i <= n; i++)
        if(answer < asec_dp[i] + desc_dp[i])
            answer = asec_dp[i] + desc_dp[i];
    
    answer--;
    
    cout << answer;
    
    return 0;
}
