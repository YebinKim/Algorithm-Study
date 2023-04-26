//
//  2748.swift
//  Step14-Dynamic Programming_1
//
//  Created by Yebin Kim on 2019/12/06.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

if let N = Int(readLine()!) {
    var dp = Array<Int>(stride(from: 1, to: N + 1, by: 1))
    
    for i in dp {
        dp[i - 1] = i < 3 ? 1 : dp[i - 2] + dp[i - 3]
    }
    
    print(dp.last!)
}
