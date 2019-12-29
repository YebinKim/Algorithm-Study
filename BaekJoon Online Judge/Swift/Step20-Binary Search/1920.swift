//
//  1920.swift
//  Step20-Binary Search
//
//  Created by Yebin Kim on 2019/12/29.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

let _ = Int(readLine()!)!
let num = readLine()!.split(separator: " ").map{ Int($0)! }.sorted()
let _ = Int(readLine()!)!
let search = readLine()!.split(separator: " ").map{ Int($0)! }

var answer = [Int]()

func binarySearch(_ e: Int) -> Int {
    var left = 0
    var right = num.count - 1
    
    while left <= right {
        let mid = (left + right) / 2
        
        if e == num[mid] {
            return 1
        } else {
            if e < num[mid] {
                right = mid - 1
            } else {
                left = mid + 1
            }
        }
    }
    
    return 0
}

for e in search {
    print(binarySearch(e))
}
