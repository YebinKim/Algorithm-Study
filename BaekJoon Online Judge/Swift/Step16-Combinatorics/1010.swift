//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

let count = Int(readLine()!)!

for _ in 0..<count {
    let bridge = readLine()!.split(separator: " ").map { Double($0)! }
    let top = factorial(bridge[1])
    let bottom = factorial(bridge[1] - bridge[0]) * factorial(bridge[0])
    let result: Int = Int(top / bottom + 0.5)
    print(result)
}

func factorial(_ number: Double) -> Double {
    if number < 2 {
        return 1
    } else {
        return number * factorial(number - 1)
    }
}
