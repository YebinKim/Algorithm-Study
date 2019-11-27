//
//  7568.swift
//  Step11-Brute Force
//
//  Created by Yebin Kim on 2019/11/27.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

if let N = Int(readLine()!) {
    var size = Array<Array<Int>>()
    
    for _ in 0..<N {
        size.append(readLine()!.split(separator: " ").map{ Int($0)! })
    }
    
    for std in size {
        var cnt = 1
        
        for cmp in size {
            if std[0] < cmp[0] && std[1] < cmp[1] {
                cnt += 1
            }
        }
        
        print(cnt)
    }
}
