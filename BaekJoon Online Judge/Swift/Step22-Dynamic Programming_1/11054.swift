//
//  11054.swift
//  Step14-Dynamic Programming_1
//
//  Created by Yebin Kim on 2019/12/18.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

if let N = Int(readLine()!) {
    let num = readLine()!.split(separator: " ").map{ Int($0)! }
    var asecDp = Array<Int>(repeating: 0, count: N)
    var descDp = Array<Int>(repeating: 0, count: N)
    
    for (i, e) in num.enumerated() {
        var max = 0
        
        for j in 0..<i {
            if max < asecDp[j] && num[j] < e {
                max = asecDp[j]
            }
        }
        
        asecDp[i] = max + 1
    }
    
    for (i, e) in num.enumerated().reversed() {
        var max = 0
        
        for j in (i..<N).reversed() {
            if max < descDp[j] && num[j] < e {
                max = descDp[j]
            }
        }
        
        descDp[i] = max + 1
    }
    
    var answer = 0
    
    for i in 0..<N {
        if answer < (asecDp[i] + descDp[i]) {
            answer = asecDp[i] + descDp[i]
        }
    }
    
    print(answer - 1)
}
