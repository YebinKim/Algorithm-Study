//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

let count = Int(readLine()!)!
var result: Int = 0
var index: Int = 1

while index * index <= count {
    result += 1
    index += 1
}

print(result)
