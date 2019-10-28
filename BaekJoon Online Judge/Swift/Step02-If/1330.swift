//
//  1330.swift
//  Step02-If
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
    
    if(A < B) {
        print("<")
    } else if(A > B) {
        print(">")
    } else {
        print("==")
    }
}
