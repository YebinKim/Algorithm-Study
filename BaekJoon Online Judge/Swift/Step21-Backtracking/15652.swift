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

dfs(0, 0)

func dfs(_ start: Int, _ index: Int) {
    if start == input[1] {
        for i in 0..<graph.count {
            print(graph[i] + 1, terminator: " ")
        }
        
        print()
        return
    }
    
    for i in index..<input[0] {
        graph.append(i)
        dfs(start + 1, i)
        graph.removeLast()
    }
}
