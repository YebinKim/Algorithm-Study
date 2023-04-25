//
//  main.swift
//  CodingTest
//
//  Created by vivi on 2023/04/25.
//

import Foundation

let totalAmount = Int(readLine()!)!
let totalCount = Int(readLine()!)!

var calculatorAmount: Int = 0
for _ in 0..<totalCount {
    let input: [Int] = readLine()!.split(separator: " ").map { Int($0)! }
    calculatorAmount += input[0] * input[1]
}

let result: String

if calculatorAmount == totalAmount {
    result = "Yes"
} else {
    result = "No"
}

print(result)
