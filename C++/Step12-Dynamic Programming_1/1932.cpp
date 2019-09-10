//
//  1932.cpp
//  Step12-Dynamic Programming_1
//
//  Created by 김예빈 on 2019. 9. 10..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, max = 0, i, j;
    
    cin >> n;
    
    int **pyramid = new int *[n];
    int **dp = new int *[n];
    
    for(i = 0; i < n; i++) {
        pyramid[i] = new int[i + 1];
        dp[i] = new int[i + 1];
        
        for(j = 0; j <= i; j++)
            cin >> pyramid[i][j];
    }
    
    dp[0][0] = pyramid[0][0];
    
    for(i = 1; i < n; i++) {
        for(j = 0; j <= i; j++) {
            if(j == 0)
                dp[i][j] = dp[i - 1][j] + pyramid[i][j];
            else if(j == i)
                dp[i][j] = dp[i - 1][j - 1] + pyramid[i][j];
            else
                dp[i][j] = (dp[i - 1][j] > dp[i - 1][j - 1] ? dp[i - 1][j] : dp[i - 1][j - 1]) + pyramid[i][j];
        }
    }
    
    for(j = 0; j < n; j++)
        if(max < dp[n - 1][j])
            max = dp[n - 1][j];
    
    cout << max;
    
    return 0;
}
