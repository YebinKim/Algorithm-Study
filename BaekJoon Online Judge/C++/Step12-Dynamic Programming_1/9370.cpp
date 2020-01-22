//
//  9095.cpp
//  Step12-Dynamic Programming_1
//
//  Created by Yebin Kim on 2020/01/22.
//  Copyright © 2020 김예빈. All rights reserved.
//

#include <iostream>

using namespace std;

const int MAX = 1000;
int dp[MAX];
 
int recursiveAdd(int);

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int tc, n;
    
    cin >> tc;
    
    while(tc--) {
        cin >> n;
        cout << recursiveAdd(n) << "\n";
    }
    
    return 0;
}

int recursiveAdd(int n) {
    if(n < 0) return 0;
    if(n <= 1) return 1;
    if(dp[n]) return dp[n];
    
    return dp[n] = recursiveAdd(n - 3) + recursiveAdd(n - 2) + recursiveAdd(n - 1);
}
