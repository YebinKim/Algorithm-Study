//
//  5622.swift
//  Step07-String
//
//  Created by Yebin Kim on 2019/11/11.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

if let input = readLine() {
    let num = [2, 2, 2,
               3, 3, 3,
               4, 4, 4,
               5, 5, 5,
               6, 6, 6,
               7, 7, 7, 7,
               8, 8, 8,
               9, 9, 9, 9]
    
    let dial = [0, 2, 3, 4, 5, 6, 7, 8, 9, 10]
    var answer = 0
    
    for (_, c) in input.enumerated() {
        let idx = String(c).unicodeScalars
        answer += dial[num[Int((idx[idx.startIndex].value - 65))]]
    }
    
    print(answer)
}
