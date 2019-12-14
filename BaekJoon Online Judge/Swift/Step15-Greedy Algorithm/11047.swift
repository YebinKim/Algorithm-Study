//
//  11047.swift
//  Step15-Greedy Algorithm
//
//  Created by Yebin Kim on 2019/12/14.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

let input = readLine()!.split(separator: " ").map{ Int($0)! }
let N = input[0]
var K = input[1]

var value = Array<Int>()
var coin = 0

for _ in 0..<N {
    value.append(Int(readLine()!)!)
}

for i in 1...N {
    coin += K / value[N - i]
    K = K % value[N - i]
}

print(coin)
