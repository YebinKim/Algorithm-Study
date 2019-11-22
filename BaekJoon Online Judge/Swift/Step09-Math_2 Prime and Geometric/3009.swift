//
//  3009.swift
//  Step09-Math_2 Prime and Geometric
//
//  Created by Yebin Kim on 2019/11/22.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

var pos = readLine()!.split(separator: " ").map{ Int($0)! }
pos.append(contentsOf: readLine()!.split(separator: " ").map{ Int($0)! })
pos.append(contentsOf: readLine()!.split(separator: " ").map{ Int($0)! })

var setX = Set<Int>()
var setY = Set<Int>()

for i in 0...2 {
    if setX.contains(pos[2 * i]) {
        setX.remove(pos[2 * i])
    } else {
        setX.insert(pos[2 * i])
    }
    
    if setY.contains(pos[2 * i + 1]) {
        setY.remove(pos[2 * i + 1])
    } else {
        setY.insert(pos[2 * i + 1])
    }
}

print("\(setX.first!) \(setY.first!)")
