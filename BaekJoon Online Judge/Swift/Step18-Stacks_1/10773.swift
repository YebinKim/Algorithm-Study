//
//  10773.swift
//  Step17-Stacks
//
//  Created by Yebin Kim on 2019/12/24.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

public struct Stack {
    private var stack = Array<Int>()
    
    public mutating func push(_ element: Int) {
        stack.append(element)
    }
    
    public mutating func pop() {
        stack.removeLast()
    }
    
    public func sum() -> Int {
        return stack.reduce(0) { $0 + $1 }
    }
}

var stack = Stack()

for _ in 0..<Int(readLine()!)! {
    let num = Int(readLine()!)!
    
    if num == 0 {
        stack.pop()
    } else {
        stack.push(num)
    }
}

print(stack.sum())
