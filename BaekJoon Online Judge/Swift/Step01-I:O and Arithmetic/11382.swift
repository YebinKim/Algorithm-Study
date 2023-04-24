//
//  main.swift
//  CodingTest
//
//  Created by vivi on 2023/04/25.
//

import Foundation

guard let inputText = readLine() else { fatalError() }

let result: Int = inputText.split(separator: " ").map { Int($0) ?? 0 }.reduce(0) { $0 + $1 }

print("\(result)")
