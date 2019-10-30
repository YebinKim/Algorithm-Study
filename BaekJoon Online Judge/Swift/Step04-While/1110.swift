//
//  1110.swift
//  Step04-While
//
//  Created by Yebin Kim on 2019/10/30.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

let n = Int(readLine()!)!
var count = 0
var num = n

repeat {
    count += 1
    
    if num < 10 {
        num = num * 11
    } else {
        num = (num % 10) * 10 + (num / 10 + num % 10) % 10
    }
    
} while num != n

print(count)
