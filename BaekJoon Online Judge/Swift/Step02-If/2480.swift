//
//  main.swift
//  CodingTest
//
//  Created by vivi on 2023/04/25.
//

import Foundation

let input = readLine()!

let numbers: [Int] = input.split(separator: " ").map { Int($0)! }.sorted { $0 > $1 }

let streakOne: Int = numbers.filter { $0 == numbers[0] }.count
let streakTwo: Int = numbers.filter { $0 == numbers[1] }.count
let isBiggerOne: Bool = streakOne >= streakTwo
let streak: Int = isBiggerOne ? streakOne : streakTwo

let result: Int

if streak == 3 {
    result = numbers[0] * 1000 + 10000
} else if streak == 2 {
    if isBiggerOne {
        result = numbers[0] * 100 + 1000
    } else {
        result = numbers[1] * 100 + 1000
    }
} else if streak == 1 {
    result = numbers[0] * 100
} else {
    fatalError()
}

print("\(result)")
