//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

let input = readLine()!.split(separator: " ").map { Int($0)! }
var queue: [Int] = []

for index in 1...input[0] {
    queue.append(index)
}

print("<", terminator: "")

var count: Int = 0
while queue.count > 1 {
    count += 1
    if count == input[1] {
        print(queue.removeFirst(), terminator: ", ")
        count = 0
    } else {
        queue.append(queue.removeFirst())
    }
}

print("\(queue.first!)>")
