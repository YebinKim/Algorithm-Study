//
//  10828.swift
//  Step17-Stacks
//
//  Created by Yebin Kim on 2019/12/23.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

public struct Stack<T> {
    private var stack = Array<T>()
    
    public mutating func push(_ element: T) {
        stack.append(element)
    }
    
    public mutating func pop() -> T {
        if stack.isEmpty {
            return -1 as! T
        } else {
            return stack.popLast()!
        }
    }
    
    public var size: Int {
        return stack.count
    }
    
    public var empty: Int {
        if stack.isEmpty {
            return 1
        } else {
            return 0
        }
    }
    
    public var top: T {
        if stack.isEmpty {
            return -1 as! T
        } else {
            return stack.last!
        }
    }
}

var stack = Stack<Int>()

for _ in 0..<Int(readLine()!)! {
    let op = readLine()!.split(separator: " ")
    
    switch op[0] {
    case "push":
        stack.push(Int(String(op[1]))!)
        break
        
    case "pop":
        print(stack.pop())
        break
        
    case "size":
        print(stack.size)
        break
        
    case "empty":
        print(stack.empty)
        break
        
    case "top":
        print(stack.top)
        break
        
    default: break
    }
}
