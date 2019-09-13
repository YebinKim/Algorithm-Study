//
//  2565.cpp
//  Step12-Dynamic Programming_1
//
//  Created by 김예빈 on 2019. 9. 13..
//  Copyright © 2019년 김예빈. All rights reserved.
//

// Using LIS(Longest Increasing Subsequence)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, b_max, result = 0, i, j;
    
    cin >> n;
    
    vector<pair<int, int>> wire(n + 1);
    vector<int> b_dp(n + 1, 0);
    wire[0].first = wire[0].second = 0;
    
    for(i = 1; i <= n; i++)
        cin >> wire[i].first >> wire[i].second;
    
    sort(wire.begin(), wire.end());
    
    for(i = 1; i <= n; i++) {
        b_max = 0;
        
        for(j = 0; j < i; j++)
            if(wire[i].second > wire[j].second) {
                if (b_max < b_dp[j])
                    b_max = b_dp[j];
            }
        
        b_dp[i] = b_max + 1;
        
        if(result < b_dp[i]) {
            result = b_dp[i];
        }
    }
    
    result = abs(n - result);
    cout << result;
    
    return 0;
}
