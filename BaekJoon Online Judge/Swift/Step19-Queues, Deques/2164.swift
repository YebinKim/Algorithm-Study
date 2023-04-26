//
//  2164.swift
//  Step18-Queues and Deques
//
//  Created by Yebin Kim on 2019/12/26.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

// Timeout
if let N = Int(readLine()!) {
    var q = Array<Int>()
    
    for i in 1...N {
        q.append(i)
    }
    
    while q.count > 1 {
        q.removeFirst()
        q.append(q.removeFirst())
    }
    
    print(q.count)
}
