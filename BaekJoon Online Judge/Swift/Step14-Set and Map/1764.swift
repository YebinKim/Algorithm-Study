//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

let count = readLine()!.split(separator: " ").map { Int($0)! }

var unheared = Set<String>()
var neverSeen = Set<String>()

for _ in 0..<count[0] {
    let input = readLine()!
    unheared.insert(input)
}

for _ in 0..<count[1] {
    let input = readLine()!
    neverSeen.insert(input)
}

let result = Array(unheared.intersection(neverSeen)).sorted()
print(result.count)
print(result.joined(separator: "\n"))
