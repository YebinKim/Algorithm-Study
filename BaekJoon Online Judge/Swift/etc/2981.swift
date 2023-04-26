//
//  2981.swift
//  Step16-Math_3 Number Theory and Combinatorics
//
//  Created by Yebin Kim on 2019/12/25.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

func euclidean(_ a: Int, _ b: Int) -> Int {
    if b % a == 0 {
        return a
    } else {
        return euclidean(b % a, a)
    }
}

if let N = Int(readLine()!) {
    var num = [Int]()
    var answer = [Int]()

    for _ in 0..<N {
        num.append(Int(readLine()!)!)
    }

    num.sort()
    var gcd = num[1] - num[0]

    for i in 2..<num.count {
        gcd = euclidean(gcd, num[i] - num[i - 1])
    }
    
    var i = 1
    
    while i * i <= gcd {
        if gcd % i == 0 {
            answer.append(i)
            
            if i != gcd / i {
                answer.append(gcd / i)
            }
        }
        
        i += 1
    }
    
    answer = answer.filter { $0 != 1 }
    answer.sort()
    
    for (_, e) in answer.enumerated() {
        print(e, terminator: " ")
    }
}
