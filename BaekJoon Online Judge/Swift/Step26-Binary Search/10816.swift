//
//  10816.swift
//  Step20-Binary Search
//
//  Created by Yebin Kim on 2020/01/03.
//  Copyright © 2020 김예빈. All rights reserved.
//

import Foundation

let _ = Int(readLine()!)!
var dic = [Int:Int]()
let num = readLine()!.split(separator: " ").map{ Int($0)! }

for e in num {
    if let _ = dic[e] {
        dic[e]! += 1
    } else {
        dic[e] = 1
    }
}

let _ = Int(readLine()!)!
let search = readLine()!.split(separator: " ").map{ Int($0)! }

for e in search {
    print(dic[e] ?? 0, terminator: " ")
}
