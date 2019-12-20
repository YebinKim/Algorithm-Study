//
//  1912.swift
//  Step14-Dynamic Programming_1
//
//  Created by Yebin Kim on 2019/12/20.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

if let N = Int(readLine()!) {
    let input = readLine()!.split(separator: " ").map{Int(String($0))!}
    var dp = Array<Int>(repeating: input.max()!, count: 1)
    
    for i in 0..<N {
        var tmp = 0
        
        loop: for j in i..<N {
            tmp += input[j]
            dp.append(tmp)
            
            if tmp < 0 {
                break loop
            }
        }
    }
    
    print(dp.max()!)
}
