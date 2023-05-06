//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

_ = readLine()
let aSet = Set(readLine()!.split(separator: " ").map { Int($0)! })
let bSet = Set(readLine()!.split(separator: " ").map { Int($0)! })

print(aSet.symmetricDifference(bSet).count)
