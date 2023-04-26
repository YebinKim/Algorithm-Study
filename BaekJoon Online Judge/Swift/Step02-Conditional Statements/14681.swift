//
//  main.swift
//  CodingTest
//
//  Created by vivi on 2023/04/25.
//

import Foundation

let inputX = Int(readLine()!)!
let inputY = Int(readLine()!)!

let isOdd: Bool = inputX * inputY > 0 ? true : false

let result: Int

if isOdd {
    if inputX > 0 {
        result = 1
    } else {
        result = 3
    }
} else {
    if inputX > 0 {
        result = 4
    } else {
        result = 2
    }
}

print("\(result)")
