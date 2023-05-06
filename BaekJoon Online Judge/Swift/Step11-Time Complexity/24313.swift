//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

let inputs = readLine()!.split(separator: " ").map { Int($0)! }
let c = Int(readLine()!)!
let n = Int(readLine()!)!

if inputs[0] * n + inputs[1] <= c * n && c - inputs[0] >= 0 {
    print(1)
} else {
    print(0)
}
