//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

let input = readLine()!.split(separator: " ").map { Int($0)! }.sorted()
let gcd = euclidean(input[0], input[1])
let result = (input[0] * input[1]) / gcd
print(result)

func euclidean(_ a: Int, _ b: Int) -> Int {
    if b % a == 0 {
        return a
    } else {
        return euclidean(b % a, a)
    }
}
