//
//  1181.swift
//  Step11-Sorting
//
//  Created by Yebin Kim on 2019/12/3.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

if let N = Int(readLine()!) {
    var arr = Set<String>()
    
    for _ in 0..<N {
        arr.insert(readLine()!)
    }
    
    let sortArr = arr.sorted {
        if $0.count < $1.count {
            return $0.count < $1.count
        } else if $0.count == $1.count {
            return $0 < $1
        } else {
            return false
        }
    }
    
    sortArr.forEach {
        print($0)
    }
}
