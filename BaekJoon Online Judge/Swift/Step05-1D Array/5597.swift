//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

let studentsCount: Int = 30

var results: [Int: Bool] = [:]

for _ in 1...studentsCount - 2 {
    let input = Int(readLine()!)!
    results[input] = true
}

for index in 1...studentsCount where results[index] == nil {
    print(index)
}
