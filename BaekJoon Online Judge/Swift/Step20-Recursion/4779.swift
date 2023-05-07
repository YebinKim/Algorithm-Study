//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

var lines: [String] = []

while true {
    guard let input = readLine(), input != "" else { break }
    
    let number = Int(input)!
    
    if number == 0 {
        print("-")
        continue
    }
    
    var repeating: Int = 1
    for _ in 0..<number {
        repeating *= 3
    }
    lines = Array(repeating: "-", count: repeating)
    removeLine(start: 0, end: lines.count - 1)
    print(lines.joined(separator: ""))
}

func removeLine(start: Int, end: Int) {
    if start < end {
        let count = end - start + 1
        let divisor = count / 3
        if divisor == 1 {
            lines[start + divisor] = " "
            return
        }
        
        let mid1 = start + divisor
        let mid2 = start + divisor * 2
        for index in mid1..<mid2 {
            lines[index] = " "
        }
        removeLine(start: start, end: mid1 - 1)
        removeLine(start: mid2, end: end)
    }
}
