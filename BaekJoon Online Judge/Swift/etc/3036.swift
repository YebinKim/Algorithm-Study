//
//  3036.swift
//  Step16-Math_3 Number Theory and Combinatorics
//
//  Created by Yebin Kim on 2019/12/30.
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

let _ = Int(readLine()!)!
let circle = readLine()!.split(separator: " ").map{ Int($0)! }
let first = circle.first!

for i in 1..<circle.count {
    let gcd = euclidean(max(circle[i], first), min(circle[i], first))
    print("\(first / gcd)/\(circle[i] / gcd)")
}
