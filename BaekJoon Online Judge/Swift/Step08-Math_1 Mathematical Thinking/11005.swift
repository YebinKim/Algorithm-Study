//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

// https://developer.apple.com/documentation/swift/string/init(_:radix:uppercase:)
let input = readLine()!.split(separator: " ").map { Int($0)! }

let result = String(input[0], radix: input[1], uppercase: true)
print(result)
