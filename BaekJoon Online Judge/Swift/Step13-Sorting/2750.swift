//
//  2750.swift
//  Step11-Sorting
//
//  Created by Yebin Kim on 2019/11/29.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

if let N = Int(readLine()!) {
    var arr = Array<Int>()
    
    for _ in 0..<N {
        arr.append(Int(readLine()!)!)
    }
    
    // Bubble Sort
    for _ in 0..<N {
        for j in 0..<(N - 1) {
            if arr[j] > arr[j + 1] {
                arr.swapAt(j, j + 1)
            }
        }
    }
    
    for i in 0..<N {
        print(arr[i])
    }
}
