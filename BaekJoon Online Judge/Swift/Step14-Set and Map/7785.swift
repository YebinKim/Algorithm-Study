//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

let count = Int(readLine()!)!

var logs = Set<String>()
for _ in 0..<count {
    let input = readLine()!.split(separator: " ").map { String($0) }
    if input[1] == "enter" {
        logs.insert(input[0])
    } else if input[1] == "leave" {
        logs.remove(input[0])
    }
}

print(Array(logs).sorted(by: >).joined(separator: "\n"))
