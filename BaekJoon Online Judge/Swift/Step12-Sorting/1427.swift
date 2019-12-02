//
//  1427.swift
//  Step11-Sorting
//
//  Created by Yebin Kim on 2019/12/2.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

if let N = readLine() {
    let arr = N.compactMap{ Int(String($0)) }.sorted(by: >).map{ String($0) }
    print(arr.reduce(""){ $0 + $1 })
}
