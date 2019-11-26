//
//  2798.swift
//  Step11-Brute Force
//
//  Created by Yebin Kim on 2019/11/26.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

let input = readLine()!.split(separator: " ").map{ Int($0)! }
let card = readLine()!.split(separator: " ").map{ Int($0)! }.sorted(){ $0 > $1 }
let N = input[0]
let M = input[1]

var answer = 0

for i in 0..<(N - 2) {
    for j in (i + 1)..<(N - 1) {
        for k in (j + 1)..<N {
            let sum = card[i] + card[j] + card[k]
            
            if (sum <= M) && (answer < sum) {
                answer = sum
            }
        }
    }
}

print(answer)
