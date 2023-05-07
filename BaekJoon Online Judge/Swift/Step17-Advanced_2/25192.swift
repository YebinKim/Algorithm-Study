//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

let count = Int(readLine()!)!
var result: Int = 0
var enterSet = Set<String>()

for _ in 0..<count {
    let input = readLine()!
    
    if input == "ENTER" {
        result += enterSet.count
        enterSet.removeAll()
        continue
    }
    enterSet.insert(input)
}

result += enterSet.count
print(result)
