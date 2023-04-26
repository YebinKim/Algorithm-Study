//
//  9020.swift
//  Step09-Math_2 Prime and Geometric
//
//  Created by Yebin Kim on 2019/11/22.
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

if let tc = Int(readLine()!) {
    for _ in 0..<tc {
        let n = Int(readLine()!)!
        
        for i in 0...(n / 2 - 2) {
            if findPrime(n / 2 - i) && findPrime(n / 2 + i) {
                print("\(n / 2 - i) \(n / 2 + i)")
                break
            }
        }
    }
}
