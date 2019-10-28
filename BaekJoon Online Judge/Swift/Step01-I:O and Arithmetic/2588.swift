//
//  2588.swift
//  Step01-I/O and Arithmetic
//
//  Created by Yebin Kim on 2019/10/28.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

var fir: Int! = Int(readLine()!)
var sec: Int! = Int(readLine()!)

if let fir = fir, let sec = sec {
    let ans = fir * sec
    let mul1 = fir * (sec % 10)
    let mul2 = fir * (sec / 10 % 10)
    let mul3 = fir * (sec / 100 % 10)

    print(mul1)
    print(mul2)
    print(mul3)
    print(ans)
}
