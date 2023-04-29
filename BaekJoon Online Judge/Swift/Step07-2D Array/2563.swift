//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

var board = Array(repeating: Array(repeating: false, count: 100), count: 100)

let count = Int(readLine()!)!

for _ in 0..<count {
    let input = readLine()!.split(separator: " ").map { Int($0)! }
    for row in input[0]..<(input[0] + 10) {
        for col in input[1]..<(input[1] + 10) {
            board[row][col] = true
        }
    }
}

let result = board.map { $0.filter { $0 }.count }.reduce(0) { $0 + $1 }
print(result)
