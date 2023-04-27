//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

var results: [Int] = [1, 1, 2, 2, 2, 8]

let inputs = readLine()!.split(separator: " ").map { Int($0)! }

for index in 0..<results.count {
    results[index] -= inputs[index]
}

for result in results {
    print(result, terminator: " ")
}
