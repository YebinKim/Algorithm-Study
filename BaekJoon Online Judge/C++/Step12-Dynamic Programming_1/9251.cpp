//
//  9251.cpp
//  Step12-Dynamic Programming_1
//
//  Created by 김예빈 on 2019. 9. 14..
//  Copyright © 2019년 김예빈. All rights reserved.
//

// Using LCS(Longest Common Subsequence)
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int i, j;
    string a, b;
    
    cin >> a >> b;
    
    int dp[a.size() + 1][b.size() + 1];
    for (i = 0; i <= a.size(); i++)
        for (j = 0; j <= b.size(); j++)
            dp[i][j] = 0;
    
    for(i = 1; i <= a.size(); i++) {
        for(j = 1; j <= b.size(); j++) {
            if(a[i - 1] == b[j - 1])
                dp[i][j] += dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = dp[i - 1][j] > dp[i][j - 1] ? dp[i - 1][j] : dp[i][j - 1];
        }
    }
    
    cout << dp[a.size()][b.size()];
    
    return 0;
}
