//
//  2439.swift
//  Step03-For
//
//  Created by Yebin Kim on 2019/10/29.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

let n: Int! = Int(readLine()!)

for i in 1...n {
    for _ in 0..<n-i {
        print(" ", terminator: "")
    }
    
    for _ in 0..<i {
        print("*", terminator: "")
    }
    
    print()
}
