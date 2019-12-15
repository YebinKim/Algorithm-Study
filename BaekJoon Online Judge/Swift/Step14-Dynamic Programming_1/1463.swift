//
//  1463.swift
//  Step14-Dynamic Programming_1
//
//  Created by Yebin Kim on 2019/12/16.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

if let N = Int(readLine()!) {
    var dp = Array(repeating: 0, count: N + 1)
    
    if N > 1 {
        for i in 2...N {
            dp[i] = dp[i - 1] + 1
            
            if i % 3 == 0 && dp[i] > dp[i / 3] {
                dp[i] = dp[i / 3] + 1
            }
            
            if i % 2 == 0  && dp[i] > dp[i / 2] {
                dp[i] = dp[i / 2] + 1
            }
        }
    }
    
    print(dp.last!)
}
