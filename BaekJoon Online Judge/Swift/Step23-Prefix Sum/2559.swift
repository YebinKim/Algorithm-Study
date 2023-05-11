//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

let count = readLine()!.split(separator: " ").map { Int($0)! }
var numbers = readLine()!.split(separator: " ").map { Int($0)! }

numbers.insert(0, at: 0)

for index in 1..<numbers.count {
    numbers[index] += numbers[index - 1]
}

var answer: Int = -Int.max
for index in 0..<(numbers.count - count[1]) {
    let newSum = numbers[index + count[1]] - numbers[index]
    answer = answer > newSum ? answer : newSum
}

print(answer)

