//
//  9012.swift
//  Step17-Stacks
//
//  Created by Yebin Kim on 2019/12/24.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

public struct Stack<T> {
    private var stack = Array<T>()
    
    public mutating func push(_ element: T) {
        stack.append(element)
    }
    
    public mutating func pop() {
        stack.removeLast()
    }
    
    public var isEmpty: Bool {
        return stack.isEmpty
    }
}

Loop1: for _ in 0..<Int(readLine()!)! {
    var st = Stack<Character>()
    let PS = readLine()!
    
    for (_, e) in PS.enumerated() {
        if e == "(" {
            st.push(e)
        } else {
            if st.isEmpty {
                print("NO")
                continue Loop1
            } else {
                st.pop()
            }
        }
    }
    
    if st.isEmpty {
        print("YES")
    } else {
        print("NO")
    }
}
