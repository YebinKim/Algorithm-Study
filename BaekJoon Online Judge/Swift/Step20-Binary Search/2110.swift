//
//  2110.swift
//  Step20-Binary Search
//
//  Created by Yebin Kim on 2020/01/12.
//  Copyright © 2020 김예빈. All rights reserved.
//

let input = readLine()!.split(separator: " ").map{ Int($0)! }
let N = input[0]
let C = input[1]
var houses = [Int]()

for _ in 0..<N {
    houses.append(Int(readLine()!)!)
}

houses.sort()

func check(_ mid: Int) -> Bool {
    var last = houses[0]
    var count = 1
    
    for house in houses {
        if house - last >= mid {
            count += 1
            last = house
        }
    }
    return count >= C
}

var left = 1
var right = houses[houses.count - 1] - houses[0]
var answer = 1

while left <= right {
    let mid = (left + right) / 2
    
    if check(mid) {
        answer = max(answer, mid)
        left = mid + 1
    } else {
        right = mid - 1
    }
}

print(answer)
