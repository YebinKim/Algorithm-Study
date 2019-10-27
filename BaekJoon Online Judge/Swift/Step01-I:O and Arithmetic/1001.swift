//
//  1001.swift
//  Step01-I/O and Arithmetic
//
//  Created by Yebin Kim on 2019/10/27.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

var input = readLine()

if let input = input {
    let arr = input.components(separatedBy: " ")
    let answer = Int(arr[0])! - Int(arr[1])!
    
    print(answer)
}
