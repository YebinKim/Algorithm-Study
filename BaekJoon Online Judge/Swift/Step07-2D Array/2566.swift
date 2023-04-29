//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

let count: Int = 9

var row: Int = 1
var column: Int = 1
var max: Int = 0

for rowIndex in 1...9 {
    let inputs = readLine()!.split(separator: " ").map { Int($0)! }
    for colIndex in 0..<9 where max < inputs[colIndex] {
        row = rowIndex
        column = colIndex + 1
        max = inputs[colIndex]
    }
}

print(max)
print("\(row) \(column)")
