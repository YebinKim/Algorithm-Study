//
//  10872.swift
//  Step10-Recursion
//
//  Created by Yebin Kim on 2019/11/24.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

func fact(_ num: Int) -> Int {
    if num < 2 {
        return 1
    } else {
        return num * fact(num - 1)
    }
}

if let N = Int(readLine()!) {
    print(fact(N))
}
