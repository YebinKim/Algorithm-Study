//
//  1193.swift
//  Step08-Math_1 Mathematical Thinking
//
//  Created by Yebin Kim on 2019/11/13.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

if var N = Int(readLine()!) {
    var num = 1
    var up = 0
    var down = 0
    
    while N > 0 {
        N -= num
        num += 1
    }
    
    num -= 1
    up = N + num
    
    num += 1
    down = num - up
    
    if num % 2 == 0 {
        print("\(down)/\(up)")
    } else  {
        print("\(up)/\(down)")
    }
}
