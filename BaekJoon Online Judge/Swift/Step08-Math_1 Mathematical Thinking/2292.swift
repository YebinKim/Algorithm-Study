//
//  2292.swift
//  Step08-Math_1 Mathematical Thinking
//
//  Created by Yebin Kim on 2019/11/13.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

if var N = Int(readLine()!) {
    var answer = 1
    
    N -= 1;
    
    while N > 0 {
        N -= 6 * answer
        answer += 1
    }
    
    print(answer)
}
