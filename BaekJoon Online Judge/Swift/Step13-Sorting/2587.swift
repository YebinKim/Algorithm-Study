//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

var numbers: [Int] = []
for _ in 0..<5 {
    numbers.append(Int(readLine()!)!)
}

numbers.sort()

print(numbers.reduce(0) { $0 + $1 } / 5)
print(numbers[2])
