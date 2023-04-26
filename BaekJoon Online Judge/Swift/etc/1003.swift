//
//  1003.swift
//  Step14-Dynamic Programming_1
//
//  Created by Yebin Kim on 2019/12/07.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

var dp = Array<Array<Int>>(repeating: Array<Int>(repeating: 0, count: 41), count: 2)

func fibonacci(_ N: Int) {
    dp[0][0] = 1
    dp[1][1] = 1
    
    if N < 2 {
        print("\(dp[0][N]) \(dp[1][N])")
    } else {
        for i in 2...N {
            dp[0][i] = dp[0][i - 1] + dp[0][i - 2]
            dp[1][i] = dp[1][i - 1] + dp[1][i - 2]
        }
        
        print("\(dp[0][N]) \(dp[1][N])")
    }
}

if var tc = Int(readLine()!) {
    while tc > 0 {
        let N = Int(readLine()!)!
        fibonacci(N)
        tc -= 1
    }
}
