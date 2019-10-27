//
//  10869.swift
//  Step01-I/O and Arithmetic
//
//  Created by Yebin Kim on 2019/10/27.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

var input = readLine()

if let input = input {
    let arr = input.components(separatedBy: " ")
    
    let add = Int(arr[0])! + Int(arr[1])!
    let sub = Int(arr[0])! - Int(arr[1])!
    let mul = Int(arr[0])! * Int(arr[1])!
    let div = Int(arr[0])! / Int(arr[1])!
    let remain = Int(arr[0])! % Int(arr[1])!
    
    print(add)
    print(sub)
    print(mul)
    print(div)
    print(remain)
}
