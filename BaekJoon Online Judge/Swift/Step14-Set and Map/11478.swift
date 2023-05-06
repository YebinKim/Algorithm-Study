//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

let input = Array(readLine()!)

var resultSet = Set<String>()
for i in 0..<input.count {
    var subString = ""
    for j in i..<input.count {
        subString += String(input[j])
        resultSet.insert(subString)
    }
}

print(resultSet.count)
