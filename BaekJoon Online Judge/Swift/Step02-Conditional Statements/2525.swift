//
//  main.swift
//  CodingTest
//
//  Created by vivi on 2023/04/25.
//

import Foundation

let inputTime = readLine()!
let duration = Int(readLine()!)!

let currentTimes: [Int] = inputTime.split(separator: " ").map { Int($0)! }

let resultHour: Int = currentTimes[0] + duration / 60
let resultMinute: Int = currentTimes[1] + duration % 60
let result: String = "\((resultHour + resultMinute / 60) % 24) \(resultMinute % 60)"

print(result)
