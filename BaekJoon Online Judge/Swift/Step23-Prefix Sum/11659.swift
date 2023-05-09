//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

let count = readLine()!.split(separator: " ").map { Int($0)! }
var numbers = readLine()!.split(separator: " ").map { Int($0)! }

for index in 1..<numbers.count {
    numbers[index] += numbers[index - 1]
}
numbers.insert(0, at: 0)

for _ in 0..<count[1] {
    let input = readLine()!.split(separator: " ").map { Int($0)! }
    print(numbers[input[1]] - numbers[input[0] - 1])
}
