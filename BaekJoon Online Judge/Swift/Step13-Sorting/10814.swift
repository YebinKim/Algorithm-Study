//
//  10814.swift
//  Step11-Sorting
//
//  Created by Yebin Kim on 2019/12/3.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

struct Member: Comparable {
    var age: Int
    var name: String
    
    static func < (lhs: Member, rhs: Member) -> Bool {
        return lhs.age < rhs.age
    }
}

if let N = Int(readLine()!) {
    var arr = Array<Member>()
    
    for _ in 0..<N {
        let input = readLine()!.split(separator: " ")
        let age = Int(input[0])!
        arr.append(Member(age: age, name: String(input[1])))
    }
    
    arr.sort()
    
    arr.forEach {
        print("\($0.age) \($0.name)")
    }
}
