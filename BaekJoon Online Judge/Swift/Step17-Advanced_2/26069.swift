//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

let count = Int(readLine()!)!
var resultSet = Set<String>()

for _ in 0..<count {
    let input = readLine()!.split(separator: " ").map { String($0) }
    
    if input.contains("ChongChong") || resultSet.contains(input[0]) || resultSet.contains(input[1]) {
        resultSet.insert(input[0])
        resultSet.insert(input[1])
    }
}

print(resultSet.count)
