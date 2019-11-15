//
//  10250.swift
//  Step08-Math_1 Mathematical Thinking
//
//  Created by Yebin Kim on 2019/11/15.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

let tc = Int(readLine()!)!

for _ in 0..<tc {
    let input = readLine()!.split(separator: " ").map{ Int($0) }
    let H = input[0]!
    let N = input[2]! - 1
    
    let answer = "\(N % H + 1)\(String(format: "%02d", N / H + 1))"
    
    print(answer)
}
