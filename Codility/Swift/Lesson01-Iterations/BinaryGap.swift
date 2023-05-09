//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

public func solution(_ N : Int) -> Int {
    let binaryArray = Array(String(N, radix: 2))
    var result: Int = 0
    var count: Int = 0
    var check: Bool = false
    for binary in binaryArray {
        if check {
            if binary == "1" {
                result = result > count ? result : count
                count = 0
            } else {
                count += 1
            }
        } else {
            if binary == "1" {
                check = true
            }
        }
    }
    return result
}
