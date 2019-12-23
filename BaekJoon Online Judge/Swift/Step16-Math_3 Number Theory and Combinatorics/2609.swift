//
//  2609.swift
//  Step16-Math_3 Number Theory and Combinatorics
//
//  Created by Yebin Kim on 2019/12/23.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

func euclidean(_ a: Int, _ b: Int) -> Int {
    if b % a == 0 {
        return a
    } else {
        return euclidean(b % a, a)
    }
}

let input = readLine()!.split(separator: " ").map{ Int($0)! }.sorted()
let A = input[0]
let B = input[1]

let gcd = euclidean(A, B)

print(gcd)
print(A * B / gcd)
