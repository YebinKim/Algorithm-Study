//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

let input = readLine()!.split(separator: " ").map { Int($0)! }
let cards = readLine()!.split(separator: " ").map { Int($0)! }.sorted(by: >)

var result: Int = 0

for i in 0..<cards.count {
    for j in i + 1..<cards.count {
        for k in j + 1..<cards.count {
            let sum: Int = cards[i] + cards[j] + cards[k]
            if sum > input[1] {
                continue
            }
            if result < sum {
                result = cards[i] + cards[j] + cards[k]
            }
        }
    }
}
print(result)
