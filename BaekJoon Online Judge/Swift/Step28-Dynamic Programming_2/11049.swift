//
//  11049.swift
//  Step22-Dynamic Programming_2
//
//  Created by Yebin Kim on 2020/01/21.
//  Copyright © 2020 김예빈. All rights reserved.
//

let N = Int(readLine()!)!

var num = Array(repeating: Array(repeating: 0, count: N + 1), count: N + 1)
var dp = num

for i in 1...N {
    let input = readLine()!.split(separator: " ").map{ Int($0)! }
    num[i][0] = input[0]
    num[i][1] = input[1]
}

for c in 2...N {
    for r in (1...(c - 1)).reversed() {
        dp[r][c] = Int.max
        
        for i in r..<c {
            let sum = min(dp[r][c], dp[r][i] + dp[i + 1][c]) + num[r][0] * num[i][1] * num[c][1]
            
            if dp[r][c] > sum {
                dp[r][c] = sum
            }
        }
    }
}

print(dp[1][N])
