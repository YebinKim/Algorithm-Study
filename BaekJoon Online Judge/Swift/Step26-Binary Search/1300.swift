//
//  1300.swift
//  Step20-Binary Search
//
//  Created by Yebin Kim on 2020/01/17.
//  Copyright © 2020 김예빈. All rights reserved.
//

let N = Int(readLine()!)!
let K = Int(readLine()!)!

let num = stride(from: 1, to: N + 1, by: 1)
var left = 1
var right = K
var answer = 0

while left <= right {
    var cnt = 0
    let mid = (left + right) / 2
    
    for e in num {
        cnt += min(N, mid / e)
    }
    
    if cnt < K {
        left = mid + 1
    } else {
        answer = mid
        right = answer - 1
    }
}

print(answer)
