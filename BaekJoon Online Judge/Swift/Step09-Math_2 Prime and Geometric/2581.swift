//
//  2581.swift
//  Step09-Math_2 Prime and Geometric
//
//  Created by Yebin Kim on 2019/11/17.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

func findPrime(_ num: Int) -> Bool {
    if num < 2 {
        return false
    }
    
    var i = 2
    
    while i * i <= num {
        if num % i == 0 {
            return false
        }
        
        i += 1
    }
    
    return true
}

if let M = Int(readLine()!), let N = Int(readLine()!) {
    let input = stride(from: M, to: N + 1, by: 1).filter{ findPrime($0) == true }
    let sum = input.reduce(0, { return $0 + $1 })
    
    if input.count == 0 {
        print(-1)
    } else {
        print(sum)
        print(input.min()!)
    }
}
