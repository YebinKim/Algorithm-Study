//
//  2293.cpp
//  Step12-Dynamic Programming_1
//
//  Created by 김예빈 on 2019. 9. 17..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int coin[101];
int dp[10001];

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, k, i, j;
    
    cin >> n >> k;
    
    for(i = 1; i <= n; i++)
        cin >> coin[i];
    
    dp[0] = 1;
    
    for(i = 1; i <= n; i++)
        for(j = 1; j <= k; j++)
            if(j - coin[i] >= 0)
                dp[j] += dp[j - coin[i]];
    
    cout << dp[k];
    
    return 0;
}
