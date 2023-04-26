//
//  1966.swift
//  Step18-Queues and Deques
//
//  Created by Yebin Kim on 2020/01/01.
//  Copyright © 2020 김예빈. All rights reserved.
//

import Foundation

public struct Queue {
    private var queue = Array<(Int, Bool)>()
    
    public mutating func push(_ element: Int, _ bool: Bool) {
        queue.append((element, bool))
    }
    
    public mutating func pop() -> (Int, Bool) {
        return queue.removeFirst()
    }
    
    public var front: (Int, Bool) {
        return (queue.first)!
    }
    
    public var max: Int {
        var ret = -1
        
        for e in queue.enumerated() {
            ret = (ret > e.element.0 ? ret : e.element.0)
        }
        
        return ret
    }
}

extension Queue: Sequence {
    public func makeIterator() -> AnyIterator<(Int, Bool)> {
        return AnyIterator(IndexingIterator(_elements: queue.lazy))
    }
}

for _ in 0..<Int(readLine()!)! {
    let N = readLine()!.split(separator: " ").map{ Int($0)! }.last!
    var q = Queue()
    
    for (i, e) in readLine()!.split(separator: " ").map({ Int($0)! }).enumerated() {
        if i == N {
            q.push(e, true)
        } else {
            q.push(e, false)
        }
    }
    
    var cnt = 1
    
    while true {
        if q.front.0 == q.max {
            if q.front.1 == true {
                print(cnt)
                break
            }
            
            _ = q.pop()
            cnt += 1
        } else {
            let pop = q.pop()
            q.push(pop.0, pop.1)
//            q.push(q.pop())
        }
    }
}
