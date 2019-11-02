//
//  3052.swift
//  Step05-1D Array
//
//  Created by Yebin Kim on 2019/11/2.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

var list: [Int]! = Array<Int>()

for _ in 0..<10 {
    if let input = readLine() {
        list.append(Int(input)!)
    }
}

var numSet = Set<Int>(list.map{ $0 % 42 })
print(numSet.count)
