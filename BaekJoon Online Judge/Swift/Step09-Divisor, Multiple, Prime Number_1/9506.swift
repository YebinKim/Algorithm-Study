//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

while true {
    let input = Int(readLine()!)!
    guard input != -1 else { break }
    
    var sum: Int = 0
    var divisors: [Int] = []
    for index in 1..<input {
        if input % index == 0 {
            sum += index
            divisors.append(index)
        }
    }
    
    if sum == input {
        print("\(input) = ", terminator: "")
        print(divisors.map { String($0) }.joined(separator: " + "))
    } else {
        print("\(input) is NOT perfect.")
    }
}
