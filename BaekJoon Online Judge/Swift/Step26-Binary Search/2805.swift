//
//  2805.swift
//  Step20-Binary Search
//
//  Created by Yebin Kim on 2020/01/06.
//  Copyright © 2020 김예빈. All rights reserved.
//

import Foundation

var input = readLine()!.split(separator: " ").map{ Int($0)! }
var N = input[0]
var M = input[1]

var trees = readLine()!.split(separator: " ").map{ Int($0)! }.sorted()
var answer = 0

var left = 0
var right = trees.last!

while left <= right {
    let mid = (left + right) / 2
    var len = 0
    
    for tree in trees where tree > mid {
        len += tree - mid
    }
    
    if len < M {
        right = mid - 1
    } else if len >= M {
        left = mid + 1
        answer = mid
    } else {
        break
    }
}

print(answer)
