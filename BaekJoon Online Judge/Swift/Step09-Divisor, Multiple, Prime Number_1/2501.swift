//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

let inputs = readLine()!.split(separator: " ").map { Int($0)! }

var count: Int = 0
var result: Int = 0

for index in 1...inputs[0] {
    if inputs[0] % index == 0 {
        count += 1
    }
    if count == inputs[1] {
        result = index
        break
    }
}

print(result)
