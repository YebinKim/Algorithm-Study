//
//  2869.swift
//  Step08-Math_1 Mathematical Thinking
//
//  Created by Yebin Kim on 2019/11/15.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

let input = readLine()!.split(separator: " ").map{ Int($0) }
var A = input[0]!
var B = input[1]!
var V = input[2]!

var answer = 1

if V != A {
    V -= A + 1
    answer = V / (A - B) + 2
}

print(answer)
