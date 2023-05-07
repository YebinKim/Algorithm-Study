//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

let count = Int(readLine()!)!

var distances: [Int] = []
var preTree: Int?
for _ in 0..<count {
    let tree = Int(readLine()!)!
    if let preTree {
        let distance = tree - preTree
        distances.append(distance)
    }
    preTree = tree
}

let distancesMap = Array(Set(distances))
var gcd: Int = distancesMap.first!
for index in 1..<distancesMap.count {
    gcd = euclidean(gcd, distancesMap[index])
}

var result: Int = 0
for distance in distances {
    result += distance / gcd - 1
}

print(result)

func euclidean(_ a: Int, _ b: Int) -> Int {
    if b % a == 0 {
        return a
    } else {
        return euclidean(b % a, a)
    }
}
