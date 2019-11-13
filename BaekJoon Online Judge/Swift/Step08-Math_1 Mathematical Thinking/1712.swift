//
//  1712.swift
//  Step08-Math_1 Mathematical Thinking
//
//  Created by Yebin Kim on 2019/11/13.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

let num = readLine()!.split(separator: " ").map{ Int($0)! }
let A = num[0]
let B = num[1]
let C = num[2]

if C - B <= 0 {
    print(-1)
} else {
    print(A / (C - B) + 1)
}
