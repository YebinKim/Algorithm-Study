//
//  1541.swift
//  Step15-Greedy Algorithm
//
//  Created by Yebin Kim on 2019/12/21.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

let input = readLine()!.split(separator: "-", maxSplits: 1)

let left = input[0].split(separator: "+").map{ Int($0)! }
let sum = left.reduce(0) { $0 + $1 }

if input.count < 2 {
    print(sum)
} else {
    let right = input[1].split(separator: "+").flatMap{ $0.split(separator: "-") }.map{ Int($0)! }
    let minus = right.reduce(0) { $0 + $1 }

    print(sum - minus)
}
