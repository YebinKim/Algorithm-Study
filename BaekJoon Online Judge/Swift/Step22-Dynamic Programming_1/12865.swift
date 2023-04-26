//
//  12865.swift
//  Step14-Dynamic Programming_1
//
//  Created by Yebin Kim on 2019/12/21.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

let input = readLine()!.split(separator: " ").map{ Int($0)! }
let N = input[0]
let maxWeight = input[1]

var value = [0]
var weight = [0]
var dp = Array(repeating: Array(repeating: 0, count: maxWeight + 1), count: N + 1)

for _ in 0..<N {
    let item = readLine()!.split(separator: " ").map{ Int($0)! }
    weight.append(item[0])
    value.append(item[1])
}

for i in 1...N {
    for j in 1...maxWeight {
        dp[i][j] = dp[i - 1][j]
        let new = j - weight[i]
        
        if new >= 0 {
            dp[i][j] = max(dp[i][j], dp[i - 1][new] + value[i])
        }
    }
}

print(dp.last!.last!)
