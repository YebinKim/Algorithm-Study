//
//  11720.swift
//  Step07-String
//
//  Created by Yebin Kim on 2019/11/6.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

if let _ = readLine(), let input = readLine() {
    var answer = 0
    
    for c in input {
        answer += Int(String(c))!
    }
    
    print(answer)
}
