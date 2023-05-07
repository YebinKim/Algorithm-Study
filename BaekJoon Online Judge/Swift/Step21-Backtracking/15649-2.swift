//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

let input = readLine()!.split(separator: " ").map { Int($0)! }
var visit: [Bool] = Array(repeating: false, count: input[0] + 1)
var graph: [Int] = []

func dfs(_ start: Int, _ end: Int, _ find: Int) {
    if start == find {
        for i in 0..<graph.count {
            print(graph[i], terminator: " ")
        }
        
        print()
        return
    }
    
    for i in 1...end {
        if visit[i] == true {
            continue
        }
        
        visit[i] = true
        graph.append(i)
        
        dfs(start + 1, end, find)
        
        visit[i] = false
        graph.removeLast()
    }
}

dfs(0, input[0], input[1])
