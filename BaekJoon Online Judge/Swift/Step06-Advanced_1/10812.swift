//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

let inputs = readLine()!.split(separator: " ").map { Int($0)! }
let basketsCount = inputs[0]
let tryCount = inputs[1]

var results: [Int] = []

for index in 1...basketsCount {
    results.append(index)
}

for _ in 0..<tryCount {
    let changes = readLine()!.split(separator: " ").map { Int($0)! }
    
    for _ in 0..<(changes[2] - changes[0]) {
        let element = results.remove(at: changes[0] - 1)
        results.insert(element, at: changes[1] - 1)
    }
}

for result in results {
    print(result, terminator: " ")
}
