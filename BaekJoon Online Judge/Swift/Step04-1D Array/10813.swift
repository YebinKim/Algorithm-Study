//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

let input = readLine()!.split(separator: " ").map { Int($0)! }
let basketsCount = input[0]
let tryCount = input[1]

var results = Array(repeating: 0, count: basketsCount)

for index in 0..<basketsCount {
    results[index] = index + 1
}

for _ in 0..<tryCount {
    let shoot = readLine()!.split(separator: " ").map { Int($0)! }
    
    results.swapAt(shoot[0] - 1, shoot[1] - 1)
}

for result in results {
    print(result, terminator: " ")
}
