//
//  5086.swift
//  Step16-Math_3 Number Theory and Combinatorics
//
//  Created by Yebin Kim on 2019/12/22.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

while true {
    let input = readLine()!.split(separator: " ").map{ Int($0)! }.filter{ $0 > 0 }

    if input.count == 0 { break }
    
    let a = input[0]
    let b = input[1]
    
    if b % a == 0 {
        print("factor")
    } else if a % b == 0 {
        print("multiple")
    } else {
        print("neither")
    }
}
