//
//  5430.swift
//  Step18-Queues and Deques
//
//  Created by Yebin Kim on 2020/01/02.
//  Copyright © 2020 김예빈. All rights reserved.
//

import Foundation

// Timeout
public struct Deque<T> {
    private var deque = Array<T>()

    public mutating func push_back(_ element: T) {
        deque.append(element)
    }

    public mutating func pop_front() {
        deque.removeFirst()
    }

    public mutating func pop_back() {
        deque.removeLast()
    }

    public var isEmpty: Bool {
        return deque.isEmpty
    }
}

extension Deque: Sequence {
    public func makeIterator() -> AnyIterator<T> {
        return AnyIterator(IndexingIterator(_elements: deque.lazy))
    }
}

loop: for _ in 0..<Int(readLine()!)! {
    let op = readLine()!.flatMap{ String($0) }
    _ = readLine()
    let input = readLine()!
    var num = ""

    for (_, e) in input.enumerated() {
        if e != "[" && e != "]" {
            num.append(String(e))
        }
    }

    var dq = Deque<String>()
    var rev = false

    for e in num.split(separator: ",") {
        dq.push_back(String(e))
    }

    for e in op {
        if e == "R" {
            rev = !rev
        } else {
            if dq.isEmpty {
                print("error")
                continue loop
            }

            if rev {
                dq.pop_back()
            } else {
                dq.pop_front()
            }
        }
    }

    var answer = ""

    if rev {
        for e in dq.reversed() {
            answer.append("\(e),")
        }
    } else {
        for e in dq {
            answer.append("\(e),")
        }
    }

    if !dq.isEmpty {
        answer.removeLast()
    }

    print("[\(answer)]")
}

// Timeout
//loop: for _ in 0..<Int(readLine()!)! {
//    let op = readLine()!.flatMap{ String($0) }
//    _ = readLine()
//    let input = readLine()!
//    var dq = Array<String>()
//    var rev = false
//    var num = ""
//
//    for (_, e) in input.enumerated() {
//        if e != "[" && e != "]" {
//            if e == "," {
//                dq.append(num)
//                num = ""
//            } else {
//                num += String(e)
//            }
//        }
//    }
//
//    for e in op {
//        if e == "R" {
//            rev = !rev
//        } else {
//            if dq.isEmpty {
//                print("error")
//                continue loop
//            }
//
//            if rev {
//                dq.removeLast()
//            } else {
//                dq.removeFirst()
//            }
//        }
//    }
//
//    var answer = ""
//
//    if rev {
//        for e in dq.reversed() {
//            answer.append("\(e),")
//        }
//    } else {
//        for e in dq {
//            answer.append("\(e),")
//        }
//    }
//
//    if !dq.isEmpty {
//        answer.removeLast()
//    }
//
//    print("[\(answer)]")
//}
