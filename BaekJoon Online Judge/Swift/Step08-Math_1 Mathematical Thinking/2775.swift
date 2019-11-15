//
//  2775.swift
//  Step08-Math_1 Mathematical Thinking
//
//  Created by Yebin Kim on 2019/11/15.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

let tc = Int(readLine()!)!

for _ in 0..<tc {
    let k = Int(readLine()!)!
    let n = Int(readLine()!)!
    
    var room = [[Int]]()
    
    for i in 0...k {
        var floor = [Int]()
        var sum = 0
        
        for j in 1...n {
            if i == 0 {
                floor.append(j)
            } else {
                sum += room[i - 1][j - 1]
                floor.append(sum)
            }
        }
        
        room.append(floor)
    }
    
    print(room.last!.last!)
}
