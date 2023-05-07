//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

let count = Int(readLine()!)!

for _ in 0..<count {
    let number = Int(readLine()!)!
    var result: Int = 0
    
    let primes = eratos(number)
    
    for index in 2...(number / 2) where primes[index] && primes[number - index] {
        result += 1
    }
    
    print(result)
}

func eratos(_ size: Int) -> Array<Bool> {
    var primes: [Bool] = Array(repeating: true, count: size + 1)
    var i: Int = 2
    var j: Int = i
    
    while i * i <= size {
        if primes[i] == true {
            j = i * i
            while j <= size {
                primes[j] = false
                j += i
            }
        }
        i += 1
    }

    return primes
}
