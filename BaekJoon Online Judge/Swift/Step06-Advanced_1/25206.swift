//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

let grade: [String: Double] = [
    "A+": 4.5,
    "A0": 4.0,
    "B+": 3.5,
    "B0": 3.0,
    "C+": 2.5,
    "C0": 2.0,
    "D+": 1.5,
    "D0": 1.0,
    "F": 0.0,
]

var totalCredit: Double = 0
var totalGrade: Double = 0
for _ in 0..<20 {
    let inputs = readLine()!.split(separator: " ")
    guard inputs[2] != "P" else { continue }
    totalCredit += Double(inputs[1])!
    totalGrade += Double(inputs[1])! * grade[String(inputs[2])]!
}

print(totalGrade / totalCredit)
