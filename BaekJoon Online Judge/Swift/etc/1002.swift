//
//  1002.swift
//  Step09-Math_2 Prime and Geometric
//
//  Created by Yebin Kim on 2019/11/24.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

if let tc = Int(readLine()!) {
    for _ in 0..<tc {
        let input = readLine()!.split(separator: " ").map{ Int($0)! }
        let x1 = input[0]
        let y1 = input[1]
        let r1 = input[2]
        let x2 = input[3]
        let y2 = input[4]
        let r2 = input[5]
        
        let dist = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)
        let diff = (r1 - r2) * (r1 - r2)
        let sum = (r1 + r2) * (r1 + r2)
        
        if dist == 0 {
            if diff == 0 {
                print(-1)
            } else {
                print(0)
            }
        } else if dist == sum || dist == diff {
            print(1)
        } else if(diff < dist && dist < sum) {
            print(2)
        } else {
            print(0)
        }
    }
}
