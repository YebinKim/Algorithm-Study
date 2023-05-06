//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

let count = Int(readLine()!)!

var maxX: Int = -100_000
var minX: Int = 100_000
var maxY: Int = -100_000
var minY: Int = 100_000

for _ in 0..<count {
    let coord = readLine()!.split(separator: " ").map { Int($0)! }
    if coord[0] < minX {
        minX = coord[0]
    }
    if coord[0] > maxX {
        maxX = coord[0]
    }
    if coord[1] < minY {
        minY = coord[1]
    }
    if coord[1] > maxY {
        maxY = coord[1]
    }
}

let result = (maxX - minX) * (maxY - minY)
print(result)
