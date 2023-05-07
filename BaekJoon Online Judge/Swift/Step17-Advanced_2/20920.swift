//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

let input = readLine()!.split(separator: " ").map { Int($0)! }
var resultDictionary: [String: Int] = [:]

for _ in 0..<input[0] {
    let word = readLine()!
    
    if word.count >= input[1] {
        if resultDictionary[word] == nil {
            resultDictionary[word] = 1
        } else {
            resultDictionary[word]! += 1
        }
    }
}

let sortedResult = resultDictionary.sorted(by: { lhs, rhs in
    if lhs.value > rhs.value {
        return true
    } else if lhs.value == rhs.value {
        if lhs.key.count == rhs.key.count {
            return lhs.key < rhs.key
        }
        return lhs.key.count > rhs.key.count
    }
    return false
})

for result in sortedResult {
    print(result.key, terminator: "\n")
}
