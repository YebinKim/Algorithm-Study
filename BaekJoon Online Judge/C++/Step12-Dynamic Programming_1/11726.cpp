//
//  11726.cpp
//  Step12-Dynamic Programming_1
//
//  Created by Yebin Kim on 2020/01/23.
//  Copyright © 2020 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

const int DIV = 10007;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n;
    
    cin >> n;
    
    int dp[n];
    dp[0] = 1; dp[1] = 2;
    
    for(int i = 2; i < n; i++)
        dp[i] = (dp[i - 1] + dp[i - 2]) % DIV;
    
    cout << dp[n - 1] << "\n";
    
    return 0;
}
