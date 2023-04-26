//
//  1654.swift
//  Step20-Binary Search
//
//  Created by Yebin Kim on 2020/01/05.
//  Copyright © 2020 김예빈. All rights reserved.
//

import Foundation

let input = readLine()!.split(separator: " ").map{ UInt($0)! }
let K = input[0]
let N = input[1]
var answer: UInt = 0

let cables = (0 ..< K).reduce(into: [UInt]()) { (sum, _) in
    sum.append(UInt(readLine()!)!)
}.sorted(by: >)

var left: UInt = 1
var right: UInt = cables.first!

while left <= right {
    let mid: UInt = (left + right) / 2
    var total: UInt = 0
    
    for cable in cables {
        let quot: UInt = cable / mid
        if quot > 0 {
            total += quot
        } else {
            break
        }
    }
    
    if total >= N {
        answer = max(mid, answer)
        left = mid + 1
    } else {
        right = mid - 1
    }
    
}

print(answer)
