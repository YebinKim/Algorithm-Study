//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

_ = readLine()
let mine = Set(readLine()!.split(separator: " ").map { Int($0)! })
_ = readLine()
let cards = readLine()!.split(separator: " ").map { Int($0)! }

for card in cards {
    print(mine.contains(card) ? "1" : "0", terminator: " ")
}
