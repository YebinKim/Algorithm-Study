//
//  11066.cpp
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

    int repeat, n, i, j, k;
    int file[501];
    int sum[501];
    int dp[501][501];
    
    cin >> repeat;

    while(repeat--) {
        cin >> n;
        
        sum[0] = 0;
        memset(dp, 0, sizeof(dp));
        
        for(i = 1; i <= n; i++) {
            cin >> file[i];
            sum[i] = sum[i - 1] + file[i];
        }
        
        for (i = 2; i <= n; i++) {
            for (j = i - 1; j > 0; j--) {
                dp[j][i] = INT_MAX;
                
                for (k = j; k <= i; k++)
                    dp[j][i] = dp[j][i] < dp[j][k] + dp[k + 1][i] ? dp[j][i] : dp[j][k] + dp[k + 1][i];
                
                dp[j][i] += sum[i] - sum[j - 1];
            }
        }
        
        cout << dp[1][n] << "\n";
    }

    return 0;
}
