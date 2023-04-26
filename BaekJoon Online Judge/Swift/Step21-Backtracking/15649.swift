//
//  15649.swift
//  Step13-Backtracking
//
//  Created by Yebin Kim on 2019/12/3.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

let input = readLine()!.split(separator: " ").map{ Int($0)! }
let N = input[0]
let M = input[1]

var visit = Array<Bool>(repeating: false, count: 9)
var graph = Array<Int>()

func dfs(_ start: Int) {
    if start == M {
        for i in 0..<graph.count {
            print(graph[i], terminator: " ")
        }
        
        print()
        return
    }
    
    for i in 1...N {
        if visit[i] == true {
            continue
        }
        
        visit[i] = true
        graph.append(i)
        
        dfs(start + 1)
        
        visit[i] = false
        graph.removeLast()
    }
}

dfs(0)
