//
//  11650.swift
//  Step11-Sorting
//
//  Created by Yebin Kim on 2019/12/2.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

struct Point: Comparable {
    var x: Int
    var y: Int
    
    static func < (lhs: Point, rhs: Point) -> Bool {
        if lhs.x == rhs.x {
            return lhs.y < rhs.y
        }
        return lhs.x < rhs.x
    }
}

if let N = Int(readLine()!) {
    var arr = Array<Point>()
    
    for _ in 0..<N {
        let input = readLine()!.split(separator: " ").map{ Int($0)! }
        arr.append(Point(x: input[0], y: input[1]))
    }
    
    arr.sort()
    
    arr.forEach {
        print("\($0.x) \($0.y)")
    }
}
