//
//  9251.cpp
//  Step12-Dynamic Programming_1
//
//  Created by Yebin Kim on 2019/10/26.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

// Time Complexity O(size^2)
// Using LCS(Longest Common Subsequence)
int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    string a, b;
    int answer;
    
    cin >> a >> b;
    
    int size = a.size() > b.size() ? a.size() : b.size();
    int dp[size + 1][size + 1];
    
    memset(dp, 0, sizeof(dp));
    
    for(int i = 1; i <= a.size(); i++) {
        for(int j = 1; j <= b.size(); j++) {
            if(a[i] == b[j])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = dp[i - 1][j] > dp[i][j - 1] ? dp[i - 1][j] : dp[i][j - 1];
        }
    }
    
    answer = dp[a.size()][b.size()];
    
    cout << answer;
    
    return 0;
}
