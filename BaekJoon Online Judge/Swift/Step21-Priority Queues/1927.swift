//
//  1927.swift
//  Step21-Priority Queues
//
//  Created by Yebin Kim on 2020/01/09.
//  Copyright © 2020 김예빈. All rights reserved.
//

public struct Heap<T> {
    private var elements: [T]
    
    public let compare: (T, T) -> Bool
    
    init(elements: [T] = [], compare: @escaping (T, T) -> Bool) {
        self.elements = elements
        self.compare = compare
        buildHeap()
    }
    
    public var count: Int {
        return elements.count
    }
    
    public var isEmpty: Bool {
        return elements.isEmpty
    }

    public func top() -> T? {
        return elements.first
    }

    public mutating func push(value: T) {
        elements.append(value)
        shiftUp(index: elements.count - 1)
    }

    public mutating func pop() -> T? {
        if elements.count == 0 { return nil }
        let res = elements.first
        elements.swapAt(0, elements.count - 1)
        let _ = elements.popLast()
        shiftDown(index: 0)
        return res
    }

    private mutating func buildHeap() {
        for i in (0..<elements.count / 2).reversed() {
            shiftDown(index: i)
        }
    }
    
    private mutating func shiftUp(index: Int) {
        var index = index
        while true {
            let parent = (index - 1) / 2
            if index == 0 || compare(elements[parent], elements[index]) { return }
            elements.swapAt(parent, index)
            index = parent
        }
    }
    
    private mutating func shiftDown(index: Int) {
        var index = index
        while true {
            let child: Int
            if index * 2 + 1 >= elements.count { return }
            else if index * 2 + 2 == elements.count {
                child = index * 2 + 1
            } else {
                child = compare(elements[index * 2 + 1], elements[index * 2 + 2]) ? index * 2 + 1 : index * 2 + 2
            }
            if compare(elements[index], elements[child]) { return }
            elements.swapAt(index, child)
            index = child
        }
    }
}

let N = Int(readLine()!)!
var heap = Heap<Int>(compare: <)

for _ in 1...N {
    let x = Int(readLine()!)!
    if x == 0 {
        let e = heap.pop()
        print(e == nil ? 0 : e!)
    } else {
        heap.push(value: x)
    }
}
