//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

let input = readLine()!.split(separator: " ").map { Double($0)! }

let x = Int((input[2] * input[4] - input[1] * input[5]) / (input[0] * input[4] - input[1] * input[3]))
let y = Int((input[2] * input[3] - input[0] * input[5]) / (input[1] * input[3] - input[0] * input[4]))
print("\(x) \(y)")
