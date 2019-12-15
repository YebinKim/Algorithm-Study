//
//  2579.swift
//  Step14-Dynamic Programming_1
//
//  Created by Yebin Kim on 2019/12/15.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

if let N = Int(readLine()!) {
    var step = Array<Int>(repeating: 0, count: 1)
    var dp = Array(repeating: 0, count: N + 1)
    
    for _ in 0..<N {
        step.append(Int(readLine()!)!)
    }
    
    dp[1] = step[1]
    dp[2] = step[1] + step[2]
    
    for i in 3..<dp.count {
        dp[i] = max(dp[i - 2], step[i - 1] + dp[i - 3])
        dp[i] += step[i]
    }
    
    print(dp.last!)
}
