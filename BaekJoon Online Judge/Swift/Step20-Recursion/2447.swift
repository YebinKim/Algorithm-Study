//
//  2447.swift
//  Step10-Recursion
//
//  Created by Yebin Kim on 2019/11/24.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

// Timeout
func printStar(_ x: Int, _ y: Int, _ size: Int) {
    let mid = size / 3
    
    if ((x / size) % 3 == 1) && ((y / size) % 3 == 1) {
        print(" ", terminator: "")
    } else {
        if mid == 0 {
            print("*", terminator: "")
        } else {
            printStar(x, y, mid);
        }
    }
}

if let N = Int(readLine()!) {
    for i in 0..<N {
        for j in 0..<N {
            printStar(i, j, N)
        }
        
        print()
    }
}
