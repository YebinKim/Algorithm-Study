//
//  10430.swift
//  Step01-I/O and Arithmetic
//
//  Created by Yebin Kim on 2019/10/27.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

var input = readLine()

if let input = input {
    let arr = input.components(separatedBy: " ")
    let A = Int(arr[0])!
    let B = Int(arr[1])!
    let C = Int(arr[2])!
    
    let ans1 = (A + B) % C
    let ans2 = (A % C + B % C) % C
    let ans3 = (A * B) % C
    let ans4 = (A % C * B % C) % C
    
    print(ans1)
    print(ans2)
    print(ans3)
    print(ans4)
}
