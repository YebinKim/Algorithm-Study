//
//  10844.swift
//  Step14-Dynamic Programming_1
//
//  Created by Yebin Kim on 2019/12/16.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

if let N = Int(readLine()!) {
    let MOD = 1000000000
    var dp = Array(repeating: Array(repeating: 1, count: 10), count: N + 1)
    dp[0][0] = 0
    
    if N > 1 {
        for i in 1...(N - 1) {
            dp[i][0] = dp[i - 1][1]
            
            for j in 1...8 {
               dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % MOD
            }
            
            dp[i][9] = dp[i - 1][8]
        }
    }
    
    var answer = 0
    
    for i in 0...9 {
        answer += dp[N - 1][i]
    }
    
    print(answer % MOD)
}
