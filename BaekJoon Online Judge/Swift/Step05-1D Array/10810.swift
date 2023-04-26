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

for _ in 0..<tryCount {
    let shoot = readLine()!.split(separator: " ").map { Int($0)! }
    
    for index in shoot[0]...shoot[1] {
        results[index - 1] = shoot[2]
    }
}

for result in results {
    print(result, terminator: " ")
}
