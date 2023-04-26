//
//  1085.swift
//  Step09-Math_2 Prime and Geometric
//
//  Created by Yebin Kim on 2019/11/22.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

let input = readLine()!.split(separator: " ").map{ Int($0)! }
let x = input[0]
let y = input[1]
let w = input[2]
let h = input[3]

var minX = w - x
var minY = h - y

if minX > x {
    minX = x
}

if minY > y {
    minY = y;
}

if minX < minY {
    print(minX)
} else {
    print(minY)
}
