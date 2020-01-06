//
//  2293.swift
//  Step22-Dynamic Programming_2
//
//  Created by Yebin Kim on 2020/01/07.
//  Copyright © 2020 김예빈. All rights reserved.
//

import Foundation

let MAX = 10000

let input = readLine()!.split(separator: " ").map{ Int($0)! }
let N = input[0]
let K = input[1]

var coin = Array(repeating: 0, count: MAX)

for i in 1...N {
    coin[i] = Int(readLine()!)!
}

var dp = Array(repeating: 0, count: MAX + 1)
dp[0] = 1

for i in 1...N {
    for j in 1...K {
        if (j - coin[i]) >= 0 {
            dp[j] += dp[j - coin[i]]
        }
    }
}

print(dp[K])
