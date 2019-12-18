//
//  11053.swift
//  Step14-Dynamic Programming_1
//
//  Created by Yebin Kim on 2019/12/18.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

if let N = Int(readLine()!) {
    let num = readLine()!.split(separator: " ").map{ Int($0)! }
    var dp = Array<Int>(repeating: 0, count: N + 1)
    
    for (i, e) in num.enumerated() {
        var max = 0
        
        for j in 0..<i {
            if max < dp[j] && num[j] < e {
                max = dp[j]
            }
        }
        
        dp[i] = max + 1
    }
    
    print(dp.max()!)
}
