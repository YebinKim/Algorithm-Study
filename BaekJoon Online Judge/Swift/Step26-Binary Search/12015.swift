//
//  12015.swift
//  Step20-Binary Search
//
//  Created by Yebin Kim on 2020/01/19.
//  Copyright © 2020 김예빈. All rights reserved.
//

// Timeout
func lowerBS(num: [Int], e: Int) -> Int {
    var left = 0
    var right = num.count - 1
    
    while left <= right {
        let mid = (left + right) / 2
        
        if e == num[mid] {
            return mid
        } else {
            if e > num[mid] {
                left = mid + 1
            } else {
                right = mid - 1
            }
        }
    }
    
    return left
}

let N = Int(readLine()!)!
let input = readLine()!.split(separator: " ").map{ Int($0)! }
var num = [input.first!]
var last = num.first!

for i in 1..<N {
    if input[i] > num.last! {
        num.append(input[i])
    } else {
        let lower = lowerBS(num: num, e: input[i])
        num[lower] = input[i]
    }
}

print(num.count)
