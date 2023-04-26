//
//  11729.swift
//  Step10-Recursion
//
//  Created by Yebin Kim on 2019/11/24.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

func hanoi(_ num: Int, _ from: Int, _ by: Int, _ to: Int) {
    if num == 1 {
        print("\(from) \(to)")
    } else {
        hanoi(num - 1, from, to, by)
        print("\(from) \(to)")
        hanoi(num - 1, by, from, to)
    }
}

if let N = Int(readLine()!) {
    print(pow(2, N) - 1)
    hanoi(N, 1, 2, 3)
}
