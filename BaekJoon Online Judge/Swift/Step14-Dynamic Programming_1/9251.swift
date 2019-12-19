//
//  9251.swift
//  Step14-Dynamic Programming_1
//
//  Created by Yebin Kim on 2019/12/19.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

if let lenA = readLine(), let lenB = readLine() {
    var dp = Array(repeating: Array(repeating: 0, count: lenB.count + 1), count: lenA.count + 1)
    
    for (i, a) in lenA.enumerated() {
        for (j, b) in lenB.enumerated() {
            if a == b {
                dp[i + 1][j + 1] = dp[i][j] + 1
            } else {
                dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j])
            }
        }
    }
    
    print(dp.last!.last!)
}
