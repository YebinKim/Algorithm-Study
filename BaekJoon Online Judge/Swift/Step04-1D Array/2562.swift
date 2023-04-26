//
//  2562.swift
//  Step05-1D Array
//
//  Created by Yebin Kim on 2019/11/1.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

var list = [Int]()

for _ in 0..<9 {
    list.append(Int(readLine()!)!)
}

if let max = list.max(), let idx = (list.firstIndex(of: max)) {
    print(max, idx + 1)
}
