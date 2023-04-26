//
//  1021.swift
//  Step18-Queues and Deques
//
//  Created by Yebin Kim on 2019/12/28.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

public struct Deque<T> {
    private var deque = Array<T>()
    
    public mutating func push_front(_ element: T) {
        deque.insert(element, at: 0)
    }
    
    public mutating func push_back(_ element: T) {
        deque.append(element)
    }
    
    public mutating func pop_front() {
        deque.removeFirst()
    }
    
    public mutating func pop_back() {
        deque.removeLast()
    }
    
    public var size: Int {
        return deque.count
    }
    
    public var front: T? {
        return deque.first
    }
    
    public var back: T? {
        return deque.last
    }
}

extension Deque: Sequence {
    public func makeIterator() -> AnyIterator<T> {
        return AnyIterator(IndexingIterator(_elements: deque.lazy))
    }
}


let input = readLine()!.split(separator: " ").map { Int($0)! }
let N = input[0]
let M = input[1]
var dq = Deque<Int>()
var answer = 0

for e in stride(from: 1, to: N + 1, by: 1) {
    dq.push_back(e)
}

let num = readLine()!.split(separator: " ").map { Int($0)! }

for e in num {
    if e == dq.front {
        dq.pop_front()
    } else {
        var idx = 1
        
        for it in dq {
            if it == e { break }
            
            idx += 1
        }
        
        let left = idx - 1;
        let right = dq.size - idx + 1;
        
        if left >= right {
            for _ in 0..<right {
                dq.push_front(dq.back!);
                dq.pop_back();
            }
            
            answer += right;
            dq.pop_front();
            
        } else if left <= right {
            for _ in 0..<left {
                dq.push_back(dq.front!);
                dq.pop_front();
            }
            
            answer += left;
            dq.pop_front();
        }
    }
}

print(answer)
