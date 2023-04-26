//
//  1018.swift
//  Step11-Brute Force
//
//  Created by Yebin Kim on 2019/11/29.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

func check(board: Array<Array<String>>, pos: (Int, Int)) -> (Int) {
    var answer = 0
    var pre = board[pos.0][pos.1]
    var std = (pre == "W") ? "B" : "W"
    
    for i in 0..<8 {
        for j in 0..<8 {
            if board[i + pos.0][j + pos.1] != pre {
                answer += 1
            }
            
            pre = std
            std = (pre == "W") ? "B" : "W"
        }
        
        pre = std
        std = (pre == "W") ? "B" : "W"
    }
    
    return (answer < 32) ? answer : 64 - answer
}

let size = readLine()!.split(separator: " ").map{ Int($0)! }
let N = size[0]
let M = size[1]
var board = Array<Array<String>>(repeating : Array(repeating: " ", count : M), count:N)
var answer = 8 * 8 / 2

for i in 0..<N {
    board[i] = (readLine()?.unicodeScalars.map{String($0)})!
}

firstLoop : for i in 0..<(N - 7) {
    for j in 0..<(M - 7) {
        let temp = check(board: board, pos: (i,j))
        answer = (answer < temp) ? answer : temp
        
        if answer == 0 {
            break firstLoop
        }
    }
}

print(answer)
