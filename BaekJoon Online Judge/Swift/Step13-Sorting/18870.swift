//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

_ = readLine()
let inputs = readLine()!.split(separator: " ").map { Int($0)! }

let sortedArray = Array(Set(inputs)).sorted()
var sortedDictionary: [Int: Int] = [:]
for (index, element) in sortedArray.enumerated() {
    guard sortedDictionary[element] == nil else { continue }
    sortedDictionary[element] = index
}

for input in inputs {
    print(sortedDictionary[input]!, terminator: " ")
}
