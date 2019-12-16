//
//  1931.swift
//  Step15-Greedy Algorithm
//
//  Created by Yebin Kim on 2019/12/16.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

struct Room: Comparable {
    var start: Int
    var end: Int
    
    static func < (lhs: Room, rhs: Room) -> Bool {
        if lhs.end ==  rhs.end {
            return lhs.start < rhs.start
        }
            
        return lhs.end < rhs.end
    }
}

if let N = Int(readLine()!) {
    var room = Array<Room>()
    
    for _ in 0..<N {
        let input = readLine()!.split(separator: " ").map{ Int($0)! }
        room.append(Room(start: input[0], end: input[1]))
    }
    
    room.sort(by: <)
    
    var prior = 0
    var answer = 0
    
    for (_, e) in room.enumerated() {
        if prior <= e.start {
            prior = e.end
            answer += 1
        }
    }
    
    print(answer)
}
