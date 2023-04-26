//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

let _ = readLine()!
let numbers = readLine()!.split(separator: " ").map { Int($0)! }
let searchNumber = Int(readLine()!)!

let result: Int = numbers.filter { $0 == searchNumber }.count

print(result)
