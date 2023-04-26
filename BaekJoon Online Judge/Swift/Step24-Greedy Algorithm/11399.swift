//
//  11399.swift
//  Step15-Greedy Algorithm
//
//  Created by Yebin Kim on 2019/12/19.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

if let _ = Int(readLine()!) {
    var waiting = readLine()!.split(separator: " ").map{ Int($0)! }
    waiting.sort(by: <)
    
    var sum = 0
    
    print(waiting.map({ cur -> Int in
        sum += cur
        return sum
    }).reduce(0){ $0 + $1 })
}
