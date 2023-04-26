//
//  11066.swift
//  Step22-Dynamic Programming_2
//
//  Created by Yebin Kim on 2020/01/14.
//  Copyright © 2020 김예빈. All rights reserved.
//

for _ in 0..<Int(readLine()!)! {
    let K = Int(readLine()!)!
    
    var page = readLine()!.split(separator: " ").map{ Int($0)! }
    page.insert(0, at: 0)
    
    var dp = Array(repeating: Array(repeating: 0, count: page.count + 1), count: page.count + 1)
    var sum = [Int]()
    var pre = 0
    
    for e in page {
        sum.append(e + pre)
        pre += e
    }
    
    for i in 2...K {
        for j in (1...(i-1)).reversed() {
            dp[j][i] = Int.max
            
            for k in j...i {
                dp[j][i] = min(dp[j][i], dp[j][k] + dp[k + 1][i])
            }
            
            dp[j][i] += sum[i] - sum[j - 1]
        }
    }
    
    print(dp[1][K])
}
