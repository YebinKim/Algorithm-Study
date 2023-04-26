//
//  2565.swift
//  Step14-Dynamic Programming_1
//
//  Created by Yebin Kim on 2019/12/19.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

struct Wire: Comparable {
    var a: Int
    var b: Int
    
    static func < (lhs: Wire, rhs: Wire) -> Bool {
        if lhs.a ==  rhs.a {
            return lhs.b < rhs.b
        }
            
        return lhs.a < rhs.a
    }
}

if let N = Int(readLine()!) {
    var wire = Array<Wire>()
    var dp = Array<Int>(repeating: 0, count: N)
    
    for _ in 0..<N {
        let input = readLine()!.split(separator: " ").map{ Int($0)! }
        wire.append(Wire(a: input[0], b: input[1]))
    }
    
    wire.sort(by: <)
    
    for (i, e) in wire.enumerated() {
        var max = 0
        
        for j in 0..<i {
            if max < dp[j] && wire[j].b < e.b {
                max = dp[j]
            }
        }
        
        dp[i] = max + 1
    }
    
    print(N - dp.max()!)
}
