//
//  1929.swift
//  Step09-Math_2 Prime and Geometric
//
//  Created by Yebin Kim on 2019/11/19.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

let input = readLine()!.components(separatedBy: " ").map{ Int($0)! }
let M = input[0]
let N = input[1]

var num = Array<Int>(repeating:1, count: N + 1)

num[1] = 0

for i in 2...N {
    var idx = 2
    
    while i * idx <= N {
        num[i * idx] = 0
        idx += 1
    }
}

for i in M...N {
    if num[i] == 1 {
        print(i)
    }
}
