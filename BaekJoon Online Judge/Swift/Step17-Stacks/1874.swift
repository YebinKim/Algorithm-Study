//
//  1874.swift
//  Step17-Stacks
//
//  Created by Yebin Kim on 2019/12/31.
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

    public var top: T? {
        return stack.last
    }

    public var isEmpty: Bool {
        return stack.isEmpty
    }
}

extension Stack: Sequence {
    public func makeIterator() -> AnyIterator<T> {
        return AnyIterator(IndexingIterator(_elements: stack.lazy))
    }
}

let N = Int(readLine()!)!
var num = [Int]()
var st = Stack<Int>()
var answer = Stack<Character>()
var cnt = 1, cur = 0

for _ in 0..<N {
    num.append(Int(readLine()!)!)
}

while true {
    while cnt <= num[cur] {
        st.push(cnt);
        answer.push("+");
        cnt += 1;
    }
    
    if st.top == num[cur] && !st.isEmpty {
        st.pop();
        answer.push("-");
    } else {
        print("NO")
        break;
    }
    
    cur += 1;
    
    if cur == N {
        for e in answer {
            print(e)
        }
        
        break
    }
}
