//
//  1546.swift
//  Step05-1D Array
//
//  Created by Yebin Kim on 2019/11/3.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

let n: Int! = Int(readLine()!)
var list: [Double]! = readLine()?.split(separator: " ").map{ Double($0)! }

let cnt: Int! = list.count
let max: Double! = list.max()
list = list.map{ $0 / max * 100 }
let answer: Double = list.reduce(0) { $0 + $1 } / Double(cnt)

print(answer)
