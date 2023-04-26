//
//  11653.swift
//  Step16-Math_3 Number Theory and Combinatorics
//
//  Created by Yebin Kim on 2019/12/22.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

var N = Int(readLine()!)!
var prime = Array<Int>()

for div in stride(from: 2, through: Int(sqrt(Double(N))), by: 1) {
    while N % div == 0 {
        prime.append(div)
        N /= div
    }
}

if N > 1 {
    prime.append(N)
}

for e in prime {
    print(e)
}
