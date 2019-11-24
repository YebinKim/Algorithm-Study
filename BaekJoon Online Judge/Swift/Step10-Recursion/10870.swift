//
//  10870.swift
//  Step10-Recursion
//
//  Created by Yebin Kim on 2019/11/24.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

func fib(_ num: Int) -> Int {
    if num < 2 {
        return num
    } else {
        return fib(num - 1) + fib(num - 2)
    }
}

if let N = Int(readLine()!) {
    print(fib(N))
}
