//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

let input = Int(readLine()!)!

var result: Int = 2
var width: Int = 1
for _ in 1...input {
    result += width
    width *= 2
}

result *= result
print(result)
