//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

let count = readLine()!.split(separator: " ").map { Int($0)! }

var nameDictionary: [String: Int] = [:]
var numberDictionary: [Int: String] = [:]
for index in 1...count[0] {
    let name = readLine()!
    nameDictionary[name] = index
    numberDictionary[index] = name
}

for _ in 0..<count[1] {
    let input = readLine()!
    if let number = Int(input) {
        print(numberDictionary[number]!)
    } else {
        print(nameDictionary[input]!)
    }
}
