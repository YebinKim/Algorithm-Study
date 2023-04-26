//
//  10866.swift
//  Step18-Queues and Deques
//
//  Created by Yebin Kim on 2019/12/24.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

// Use two stacks to implement deque
public struct Stack<T> {
    private var stack = Array<T>()
    
    public mutating func push(_ element: T) {
        stack.append(element)
    }
    
    public mutating func pop() -> T? {
        return stack.popLast()
    }
    
    public var size: Int {
        return stack.count
    }
    
    public var empty: Bool {
        return stack.isEmpty
    }
    
    public var top: T? {
        return stack.last
    }
    
    public mutating func reverse() -> Stack<T> {
        var ret = Stack<T>()
        var copy = stack
        
        for _ in 0..<copy.count {
            ret.push(copy.popLast()!)
        }
        
        return ret
    }
}

public struct Deque<T> {
    private var frontStack = Stack<T>()
    private var backStack = Stack<T>()
    
    public mutating func push_front(_ element: T) {
        frontStack.push(element)
        backStack = frontStack.reverse()
    }
    
    public mutating func push_back(_ element: T) {
        backStack.push(element)
        frontStack = backStack.reverse()
    }
    
    public mutating func pop_front() -> T {
        if frontStack.empty {
            return -1 as! T
        } else {
            let ret = frontStack.pop()
            backStack = frontStack.reverse()
            return ret!
        }
    }
    
    public mutating func pop_back() -> T {
        if backStack.empty {
            return -1 as! T
        } else {
            let ret = backStack.pop()
            frontStack = backStack.reverse()
            return ret!
        }
    }
    
    public var size: Int {
        return frontStack.size
    }
    
    public var empty: Int {
        if frontStack.empty {
            return 1
        } else {
            return 0
        }
    }
    
    public var front: T {
        if frontStack.empty {
            return -1 as! T
        } else {
            return frontStack.top!
        }
    }
    
    public var back: T {
        if backStack.empty {
            return -1 as! T
        } else {
            return backStack.top!
        }
    }
}

var deque = Deque<Int>()

for _ in 0..<Int(readLine()!)! {
    let op = readLine()!.split(separator: " ")
    
    switch op[0] {
    case "push_front":
        deque.push_front(Int(String(op[1]))!)
        break
        
    case "push_back":
        deque.push_back(Int(String(op[1]))!)
        break
        
    case "pop_front":
        print(deque.pop_front())
        break
        
    case "pop_back":
        print(deque.pop_back())
        break
        
    case "size":
        print(deque.size)
        break
        
    case "empty":
        print(deque.empty)
        break
        
    case "front":
        print(deque.front)
        break
        
    case "back":
        print(deque.back)
        break
        
    default: break
    }
}
