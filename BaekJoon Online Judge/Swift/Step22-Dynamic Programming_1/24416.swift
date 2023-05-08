//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

let input = Int(readLine()!)!
var array = Array(repeating: 0, count: input)

print("\(fibonacci(input)) \(input - 2)")

func fibonacci(_ number: Int) -> Int {
    array[0] = 1
    array[1] = 1
    
    for index in 2..<number {
        array[index] = array[index - 1] + array[index - 2]
    }
    return array[number - 1]
}
