//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

let standard = readLine()!.split(separator: " ").map { Int($0)! }.last!
let scores = readLine()!.split(separator: " ").map { Int($0)! }.sorted(by: >)

print(scores[standard - 1])
