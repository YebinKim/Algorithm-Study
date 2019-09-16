//
//  11049.cpp
//  Step12-Dynamic Programming_1
//
//  Created by 김예빈 on 2019. 9. 16..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <string.h>
#include <limits.h>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, sum, i, j, k;
    int arr[501][2];
    int dp[501][501];
    memset(dp, 0, sizeof(dp));
    
    cin >> n;
    
    for(i = 1; i <= n; i++)
        cin >> arr[i][0] >> arr[i][1];
    
    for (i = 2; i <= n; i++) {
        for (j = i - 1; j > 0; j--) {
            dp[j][i] = INT_MAX;
            
            for (k = j; k < i; k++) {
                sum = (dp[j][i] < dp[j][k] + dp[k + 1][i] ? dp[j][i] : dp[j][k] + dp[k + 1][i]) + arr[j][0] * arr[k][1] * arr[i][1];
                
                if(dp[j][i] > sum)
                    dp[j][i] = sum;
            }
        }
    }
    
    cout << dp[1][n];
    
    return 0;
}
