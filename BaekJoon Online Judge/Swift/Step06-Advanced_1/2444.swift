//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

let input = Int(readLine()!)!

for row in 0..<input {
    for _ in 1..<(input - row) {
        print(" ", terminator: "")
    }
    for _ in 0...(row * 2) {
        print("*", terminator: "")
    }
    print("")
}
for row in 0..<(input - 1) {
    for _ in 0...row {
        print(" ", terminator: "")
    }
    for _ in 1..<((input - row - 1) * 2) {
        print("*", terminator: "")
    }
    print("")
}
