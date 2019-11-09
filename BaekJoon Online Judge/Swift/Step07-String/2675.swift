//
//  2675.swift
//  Step07-String
//
//  Created by Yebin Kim on 2019/11/9.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

let tc: Int! = Int(readLine()!)

for _ in 0..<tc {
    let input = readLine()!.split(separator: " ")
    let R = Int(input[0])!
    let S = input[1]
    
    S.forEach {
        print(String(repeating: $0, count: R), terminator: "")
    }
    
    print()
}
