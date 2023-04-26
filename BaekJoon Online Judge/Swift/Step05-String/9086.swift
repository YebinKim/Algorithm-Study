//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

let count = Int(readLine()!)!
var results: [String] = []

for _ in 0..<count {
    let input = readLine()!
    results.append("\(input.first!)\(input.last!)")
}

for result in results {
    print(result)
}
