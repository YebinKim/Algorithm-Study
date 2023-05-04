//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

// https://developer.apple.com/documentation/swift/int/init(_:radix:)
let input = readLine()!.split(separator: " ")
let radix = Int(input[1])!

let result = Int(input[0], radix: radix)!
print(result)
