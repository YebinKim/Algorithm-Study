//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

let input = Int(readLine()!)!
print(factorial(input: input))

func factorial(input: Int) -> Int {
    if input < 2 {
        return 1
    } else {
        return input * factorial(input: input - 1)
    }
}
