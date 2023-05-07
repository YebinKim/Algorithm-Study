//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

let count = Int(readLine()!)!

for _ in 0..<count {
    var number = Int(readLine()!)!
    
    while !isPrime(number) {
        number += 1
    }
    print(number)
}

func isPrime(_ number: Int) -> Bool {
    if number < 2 {
        return false
    }
    
    var index = 2
    while index * index <= number {
        if number % index == 0 {
            return false
        }
        
        index += 1
    }
    
    return true
}
