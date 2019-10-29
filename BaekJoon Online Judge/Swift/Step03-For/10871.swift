//
//  10871.swift
//  Step03-For
//
//  Created by Yebin Kim on 2019/10/29.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

let input: String! = readLine()
let arr = input.components(separatedBy: " ")

if let N = Int(arr[0]), let X = Int(arr[1]) {
    let num: String! = readLine()
    let numArr = num.components(separatedBy: " ")
    
    for i in 0..<N {
        if Int(numArr[i])! < X {
            print(numArr[i], terminator: " ")
        }
    }
}
