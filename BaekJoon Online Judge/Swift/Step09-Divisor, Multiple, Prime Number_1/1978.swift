//
//  1978.swift
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

if let _ = Int(readLine()!) {
    let input = readLine()!.split(separator: " ").map{ Int($0)! }.filter{ findPrime($0) == true }
    print(input.count)
}
