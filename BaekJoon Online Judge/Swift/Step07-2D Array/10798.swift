//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

var maxColumn: Int = 0
var inputs: [[String]] = [[]]
for _ in 0..<5 {
    let input = readLine()!.map { String($0) }
    inputs.append(input)
    
    if maxColumn < input.count {
        maxColumn = input.count
    }
}
_ = inputs.removeFirst()

for row in 0..<maxColumn {
    for col in 0..<5 {
        guard inputs[col].count > row else { continue }
        print(inputs[col][row], terminator: "")
    }
}
