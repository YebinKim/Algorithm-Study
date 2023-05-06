//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

while true {
    let inputs = readLine()!.split(separator: " ").map { Int($0)! }.sorted()
    
    guard inputs.reduce(0, { $0 + $1 }) != 0 else { break }
    
    if inputs[0] + inputs[1] > inputs[2] {
        if inputs[0] == inputs[1] && inputs[1] == inputs[2] {
             print("Equilateral")
        } else if inputs[0] == inputs[1] || inputs[1] == inputs[2] {
            print("Isosceles")
        } else {
            print("Scalene")
        }
    } else {
        print("Invalid")
    }
}
