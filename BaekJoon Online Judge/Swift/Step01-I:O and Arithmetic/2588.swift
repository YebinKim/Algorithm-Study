//
//  2588.swift
//  Step01-I/O and Arithmetic
//
//  Created by Yebin Kim on 2019/10/27.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

var fir: Int! = Int(readLine()!)
var sec: Int! = Int(readLine()!)

let ans = fir * sec
let mul1 = fir * (sec % 10)
let mul2 = fir * (sec / 10 % 10)
let mul3 = fir * (sec / 100 % 10)

print(mul1)
print(mul2)
print(mul3)
print(ans)

//var fir = Int(readLine()!)
//var sec = Int(readLine()!)
//
//var ans: Int = 0, mul1: Int = 0, mul2: Int = 0, mul3: Int = 0
//
//if let fir = fir {
//    ans = fir
//    mul1 = fir
//    mul2 = fir
//    mul3 = fir
//}
//
//if let sec = sec {
//    ans *= sec
//    mul1 *= (sec % 10)
//    mul2 *= (sec / 10 % 10)
//    mul3 *= (sec / 100 % 10)
//
//    print(mul1)
//    print(mul2)
//    print(mul3)
//    print(ans)
//}
