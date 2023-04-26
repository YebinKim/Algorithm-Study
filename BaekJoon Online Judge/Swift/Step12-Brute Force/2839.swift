//
//  2839.swift
//  Step08-Math_1 Mathematical Thinking
//
//  Created by Yebin Kim on 2019/11/13.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

if let N = Int(readLine()!) {
    var three = 0
    var five = N / 5
    
    while(five >= 0) {
        three = N - (five * 5)
        
        if three % 3 == 0 {
            three /= 3
            break
        } else {
            five -= 1
        }
    }
    
    if five < 0 {
        print(-1)
    } else {
        print(five + three)
    }
}
