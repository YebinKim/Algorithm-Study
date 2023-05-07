//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

let count = Int(readLine()!)!

for _ in 0..<count {
    let input = Array(readLine()!)
    recur = 1
    print("\(isPalindrome(string: input)) \(recur)")
}

var recur: Int = 0

func recursion(string: [Character], front: Int, rear: Int) -> Int {
    if front >= rear {
        return 1
    } else if string[front] != string[rear] {
        return 0
    } else {
        recur += 1
        return recursion(string: string, front: front + 1, rear: rear - 1)
    }
}

func isPalindrome(string: [Character]) -> Int {
    return recursion(string: string, front: 0, rear: string.count - 1)
}
