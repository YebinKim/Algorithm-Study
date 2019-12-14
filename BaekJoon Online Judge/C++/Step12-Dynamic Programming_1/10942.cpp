//
//  10942.cpp
//  Step12-Dynamic Programming_1
//
//  Created by Yebin Kim on 2019/12/14.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int N, M;
    
    cin >> N;
    int num[N + 1];
    bool dp[N + 1][N + 1];
    
    for(int i = 1; i <= N; i++)
        cin >> num[i];
    
    num[0] = -1;
    
    for(int i = 1; i <= N; i++) {
        dp[i][i] = true;
        
        if(num[i - 1] == num[i])
            dp[i - 1][i] = true;
    }
    
    for(int len = 3; len <= N; len++) {
        for(int i = 1; i <= N - len + 1; i++) {
            int j = i + len - 1;
            
            if(num[i] == num[j] && dp[i + 1][j - 1])
                dp[i][j] = 1;
        }
    }
    
    cin >> M;
    
    for(int i = 0; i < M; i++) {
        int S, E;
        cin >> S >> E;
        cout << dp[S][E] << "\n";
    }
    
    return 0;
}
