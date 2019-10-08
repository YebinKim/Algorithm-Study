//
//  12865.cpp
//  Step12-Dynamic Programming_1
//
//  Created by 김예빈 on 2019. 9. 17..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <string.h>
using namespace std;

int dp[101][100001];
int weight[101];
int value[101];

// 0-1 Knapsack Problem
int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, max, i, j;
    
    memset(dp, 0, sizeof(dp));
    
    cin >> n >> max;
    
    for(i = 1; i <= n; i++)
        cin >> weight[i] >> value[i];
    
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= max; j++) {
            dp[i][j] = dp[i - 1][j];
            
            if (j - weight[i] >= 0)
                dp[i][j] = dp[i][j] > dp[i - 1][j - weight[i]] + value[i] ? dp[i][j] : dp[i - 1][j - weight[i]] + value[i];
        }
    }
    
    cout << dp[n][max];
    
    return 0;
}
