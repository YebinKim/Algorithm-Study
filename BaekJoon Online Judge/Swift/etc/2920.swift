//
//  2920.swift
//  Step05-1D Array
//
//  Created by Yebin Kim on 2019/11/1.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

let list: [Int]! = readLine()?.split(separator: " ").map{ Int($0)! }
var asc: Bool?
var desc: Bool?

for i in 1..<7 {
    if (list[i] - list[i + 1]) < 0 {
        asc = true
    } else if (list[i] - list[i + 1]) > 0 {
        desc = true
    }
}

if let _ = asc, let _ = desc {
    print("mixed")
} else if let _ = asc {
    print("ascending")
} else if let _ = desc {
    print("descending")
}
