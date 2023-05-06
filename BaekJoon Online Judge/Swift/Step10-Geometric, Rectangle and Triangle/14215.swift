//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

let inputs = readLine()!.split(separator: " ").map { Int($0)! }.sorted()
print((inputs[0] + inputs[1]) + min(inputs[0] + inputs[1] - 1, inputs[2]))
