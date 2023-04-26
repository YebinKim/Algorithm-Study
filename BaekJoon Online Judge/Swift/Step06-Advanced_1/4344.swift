//
//  4344.swift
//  Step05-1D Array
//
//  Created by Yebin Kim on 2019/11/4.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

let n: Int! = Int(readLine()!)

for _ in 0..<n {
    var list: [Double]! = readLine()?.split(separator: " ").map{ Double($0)! }
    let cnt: Double! = list!.removeFirst()
    
    let avg: Double! = list.reduce(0) { $0 + $1 } / cnt
    let topStudent: [Double] = list.filter { $0 > avg }
    let answer: Double! = Double(topStudent.count) / cnt * 100.0
    
    print(String(format: "%.3f", answer) + "%")
}
