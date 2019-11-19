//
//  4948.swift
//  Step09-Math_2 Prime and Geometric
//
//  Created by Yebin Kim on 2019/11/19.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

let max = 123456 * 2

var prime = Array<Bool>(repeating: true, count: max + 1)

for i in 2...max {
    if prime[i] {
        for j in stride(from: i * 2, through: max, by: i) {
            prime[j] = false
        }
    }
}

while true {
    var answer = 0
    let N = Int(readLine()!)!
    
    if N == 0 { break }
    
    for i in (N + 1)...(2 * N) {
        if prime[i] == true {
            answer += 1
        }
    }
    
    print(answer)
}
