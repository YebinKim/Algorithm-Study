//
//  1149.swift
//  Step14-Dynamic Programming_1
//
//  Created by Yebin Kim on 2019/12/09.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

if let N = Int(readLine()!) {
    var house = Array<Array<Int>>()
    var dp = Array<Array<Int>>(repeating: Array<Int>(repeating: 0, count: 3), count: N)
    
    for _ in 0..<N {
        let input = readLine()!.split(separator: " ").map{ Int($0) }
        house.append(input as! [Int])
    }
    
    dp[0][0] = house[0][0]
    dp[0][1] = house[0][1]
    dp[0][2] = house[0][2]
    
    for i in 1..<N {
        dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + house[i][0]
        dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + house[i][1]
        dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + house[i][2]
    }
    
    print(min(dp[N - 1][0], dp[N - 1][1], dp[N - 1][2]))
}
