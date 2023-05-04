//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

let count = Int(readLine()!)!

for _ in 0..<count {
    var change = Int(readLine()!)!
    let quarter = change / 25
    change -= quarter * 25
    let dime = change / 10
    change -= dime * 10
    let nickel = change / 5
    change -= nickel * 5
    let penny = change
    
    print("\(quarter) \(dime) \(nickel) \(penny)")
}
