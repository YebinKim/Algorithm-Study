//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

let first = readLine()!.split(separator: " ").map { Int($0)! }
let second = readLine()!.split(separator: " ").map { Int($0)! }

let top = first[0] * second[1] + second[0] * first[1]
let bottom = first[1] * second[1]

let gcd = euclidean(top, bottom)
print("\(top / gcd) \(bottom / gcd)")

func euclidean(_ a: Int, _ b: Int) -> Int {
    if b % a == 0 {
        return a
    } else {
        return euclidean(b % a, a)
    }
}
