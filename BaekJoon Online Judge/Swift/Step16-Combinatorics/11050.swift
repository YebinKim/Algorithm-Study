//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

let input = readLine()!.split(separator: " ").map { Int($0)! }
let top: Int = factorial(input[0])
let bottom: Int = factorial(input[0] - input[1]) * factorial(input[1])

print(top / bottom)

func factorial(_ number: Int) -> Int {
    if number < 2 {
        return 1
    } else {
        return number * factorial(number - 1)
    }
}
