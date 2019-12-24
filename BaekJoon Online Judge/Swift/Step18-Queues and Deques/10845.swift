//
//  10845.swift
//  Step18-Queues and Deques
//
//  Created by Yebin Kim on 2019/12/24.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

public struct Queue<T> {
    private var queue = Array<T>()
    
    public mutating func push(_ element: T) {
        queue.append(element)
    }
    
    public mutating func pop() -> T {
        if queue.isEmpty {
            return -1 as! T
        } else {
            return queue.removeFirst()
        }
    }
    
    public var size: Int {
        return queue.count
    }
    
    public var empty: Int {
        if queue.isEmpty {
            return 1
        } else {
            return 0
        }
    }
    
    public var front: T {
        if queue.isEmpty {
            return -1 as! T
        } else {
            return queue.first!
        }
    }
    
    public var back: T {
        if queue.isEmpty {
            return -1 as! T
        } else {
            return queue.last!
        }
    }
}

var queue = Queue<Int>()

for _ in 0..<Int(readLine()!)! {
    let op = readLine()!.split(separator: " ")
    
    switch op[0] {
    case "push":
        queue.push(Int(String(op[1]))!)
        break
        
    case "pop":
        print(queue.pop())
        break
        
    case "size":
        print(queue.size)
        break
        
    case "empty":
        print(queue.empty)
        break
        
    case "front":
        print(queue.front)
        break
        
    case "back":
        print(queue.back)
        break
        
    default: break
    }
}
