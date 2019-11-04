//
//  8958.swift
//  Step05-1D Array
//
//  Created by Yebin Kim on 2019/11/4.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

let n: Int! = Int(readLine()!)

for _ in 0..<n {
    let input = readLine()!
    var point = 1
    var answer = 0
    
    input.forEach {
        if $0 == "O" {
            answer += point
            point += 1
        } else {
            point = 1
        }
    }
    
    print(answer)
}
