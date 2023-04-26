//
//  1932.swift
//  Step14-Dynamic Programming_1
//
//  Created by Yebin Kim on 2019/12/14.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

if let N = Int(readLine()!) {
    var answer = Array(repeating: 0, count: N)
    
    for _ in 0..<N {
        let input = readLine()!.split(separator: " ").map{ Int($0)! }
        var triangle = answer
        
        for (i, e) in input.enumerated() {
            if i == 0 {
                triangle[i] = e + answer[0]
            } else {
                triangle[i] = e + max(answer[i], answer[i - 1])
            }
        }
        
        answer = triangle
    }
    
    print(answer.max()!)
}
