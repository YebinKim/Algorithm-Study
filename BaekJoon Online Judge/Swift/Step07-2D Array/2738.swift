//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

let counts = readLine()!.split(separator: " ").map { Int($0)! }

var matrix1: [[Int]] = [[]]
for _ in 0..<counts[0] {
    let input = readLine()!.split(separator: " ").map { Int($0)! }
    matrix1.append(input)
}

var matrix2: [[Int]] = [[]]
for _ in 0..<counts[0] {
    let input = readLine()!.split(separator: " ").map { Int($0)! }
    matrix2.append(input)
}

for row in 1...counts[0] {
    for col in 0..<counts[1] {
        matrix1[row][col] += matrix2[row][col]
    }
}

for row in 1...counts[0] {
    for element in matrix1[row] {
        print(element, terminator: " ")
    }
    print("")
}
