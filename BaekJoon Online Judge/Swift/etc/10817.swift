//
//  10817.swift
//  Step02-If
//
//  Created by Yebin Kim on 2019/10/28.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

var input = readLine()

if let input = input {
    let arr = input.components(separatedBy: " ")
    
    let num1 = Int(arr[0])!
    let num2 = Int(arr[1])!
    let num3 = Int(arr[2])!
    
    if(num1 >= num2 && num1 >= num3) {
        if(num2 > num3) {
            print(num2)
        } else {
            print(num3)
        }
    } else if(num2 >= num1 && num2 >= num3) {
        if(num1 > num3) {
            print(num1)
        } else {
            print(num3)
        }
    } else {
        if(num1 > num2) {
            print(num1)
        } else {
            print(num2)
        }
    }
}
