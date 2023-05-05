//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

let inputs = readLine()!.split(separator: " ")
let lhs: [Int] = inputs[0].reversed().map { Int(String($0))! }
let rhs: [Int] = inputs[1].reversed().map { Int(String($0))! }

let maxCount: Int = lhs.count >= rhs.count ? lhs.count : rhs.count
var isTen: Bool = false
var result: [Int] = []

for index in 0...maxCount {
    let left: Int = lhs[safe: index] ?? 0
    let right: Int = rhs[safe: index] ?? 0
    let sum = left + right + (isTen ? 1 : 0)
    
    isTen = sum / 10 == 1
    result.append(sum % 10)
}

if result.last == 0 {
    result.removeLast()
}

print(result.reversed().map { String($0) }.joined())

extension Array {
    subscript (safe index: Int) -> Element? {
        return indices ~= index ? self[index] : nil
    }
}
