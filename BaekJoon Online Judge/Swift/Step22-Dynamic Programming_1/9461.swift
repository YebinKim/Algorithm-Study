//
//  9461.swift
//  Step14-Dynamic Programming_1
//
//  Created by Yebin Kim on 2019/12/09.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

var dp = [1, 1, 1, 2, 2]

for i in 5..<100 {
    dp.append(dp[i - 5] + dp[i - 1])
}

if var tc = Int(readLine()!) {
    while tc > 0 {
        let N = Int(readLine()!)!
        print(dp[N - 1])
        
        tc -= 1
    }
}
