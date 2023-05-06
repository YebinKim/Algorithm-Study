//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

var inputs: [Int] = []
for _ in 0..<3 {
    inputs.append(Int(readLine()!)!)
}

inputs.sort()

if inputs.reduce(0, { $0 + $1 }) == 180 {
    if inputs[0] == 60, inputs[1] == 60 {
         print("Equilateral")
    } else if inputs[0] == inputs[1] || inputs[1] == inputs[2] {
        print("Isosceles")
    } else {
        print("Scalene")
    }
} else {
    print("Error")
}
