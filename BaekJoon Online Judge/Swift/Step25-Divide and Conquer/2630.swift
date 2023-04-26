//
//  2630.swift
//  Step19-Divide and Conquer
//
//  Created by Yebin Kim on 2020/01/04.
//  Copyright © 2020 김예빈. All rights reserved.
//

import Foundation

var w = 0
var b = 0

func divide(_ x: Int, _ y: Int, _ size: Int, _ square: [[Int]]) {
    let color = square[x][y]
    
    for i in x..<(x + size) {
        for j in y..<(y + size) {
            if color != square[i][j] {
                divide(x, y, size / 2, square)
                divide(x + size / 2, y, size / 2, square)
                divide(x, y + size / 2, size / 2, square)
                divide(x + size / 2, y + size / 2, size / 2, square)
                
                return
            }
        }
    }
    
    if color == 0 {
        w += 1
    } else {
        b += 1
    }
}

let N = Int(readLine()!)!
var square = [[Int]]()

for _ in 0..<N {
    square.append(readLine()!.split(separator: " ").map { Int($0)! })
}

divide(0, 0, N, square)

print("\(w)\n\(b)")
