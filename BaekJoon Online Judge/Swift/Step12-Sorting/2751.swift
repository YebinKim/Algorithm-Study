//
//  2751.swift
//  Step11-Sorting
//
//  Created by Yebin Kim on 2019/12/1.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

if let N = Int(readLine()!) {
    var arr = Array<Int>()
    
    for _ in 0..<N {
        arr.append(Int(readLine()!)!)
    }
    
    arr.sorted().forEach{ print($0) }
}
