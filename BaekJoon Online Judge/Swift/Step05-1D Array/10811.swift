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
    let changes = readLine()!.split(separator: " ").map { Int($0)! }
    let half: Int = (changes[1] - changes[0]) / 2 + 1
    
    for startIndex in 0..<half {
        results.swapAt(changes[0] - 1 + startIndex, changes[1] - 1 - startIndex)
    }
}

for result in results {
    print(result, terminator: " ")
}
