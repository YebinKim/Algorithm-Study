//
//  2884.swift
//  Step02-If
//
//  Created by Yebin Kim on 2019/10/28.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

var input = readLine()

if let input = input {
    let arr = input.components(separatedBy: " ")
    
    var time = Int(arr[0])!
    var min = Int(arr[1])!
    
    if(min - 45 >= 0) {
        min -= 45
    } else {
        time -= 1
        min += 15
    }
    
    if(time < 0) {
        time += 24
    }
    
    let answer = String(time) + " " + String(min)
    
    print(answer)
}
