//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

var dp = Array(repeating: Array(repeating: Array(repeating: 0, count: 50), count: 50), count: 50)

while true {
    let input = readLine()!.split(separator: " ").map { Int($0)! }
    guard input.filter({ $0 == -1 }).count != 3 else { break }
    
    print("w(\(input[0]), \(input[1]), \(input[2])) = \(w(input[0] - 1, input[1] - 1, input[2] - 1))")
    
    func w(_ a: Int, _ b: Int, _ c: Int) -> Int {
        if a < 0 || b < 0 || c < 0 {
            return 1
        } else if a > 19 || b > 19 || c > 19 {
            dp[a][b][c] = w(19, 19, 19)
            return dp[a][b][c]
        } else if dp[a][b][c] != 0 {
            return dp[a][b][c]
        } else if a < b, b < c {
            dp[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c)
            return dp[a][b][c]
        } else {
            dp[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1)
            return dp[a][b][c]
        }
    }
}
