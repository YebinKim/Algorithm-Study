//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

let counts = readLine()!.split(separator: " ").map { Int($0)! }

var set = Set<String>()
for _ in 0..<counts[0] {
    let words = readLine()!
    set.insert(words)
}

var result: Int = 0
for _ in 0..<counts[1] where set.contains(readLine()!) {
    result += 1
}

print(result)
