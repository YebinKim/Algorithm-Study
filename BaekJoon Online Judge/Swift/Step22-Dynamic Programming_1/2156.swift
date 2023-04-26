//
//  2156.swift
//  Step14-Dynamic Programming_1
//
//  Created by Yebin Kim on 2019/12/15.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

if let N = Int(readLine()!) {
    var wine = Array<Int>(repeating: 0, count: 1)
    var dp = Array(repeating: 0, count: N + 1)
    
    for _ in 0..<N {
        wine.append(Int(readLine()!)!)
    }
    
    if N > 2 {
        dp[0] = wine[0]
        dp[1] = wine[0] + wine[1]
        dp[2] = max(wine[0] + wine[2], max(wine[1] + wine[2], dp[1]))
        
        for i in 3..<dp.count {
            dp[i] = max(dp[i - 2], wine[i - 1] + dp[i - 3])
            dp[i] += wine[i]
            dp[i] = max(dp[i - 1], dp[i])
        }
        
        print(dp.last!)
    } else {
        print(wine.reduce(0){ $0 + $1 })
    }
}
