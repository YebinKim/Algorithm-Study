//
//  main.swift
//  CodingTest
//
//  Created by vivi on 2023/04/25.
//

import Foundation

guard let inputText = readLine(),
      let input = Int(inputText)
else { fatalError() }

let BuddhaEra: Int = 543
let result: Int = input - BuddhaEra

print("\(result)")
