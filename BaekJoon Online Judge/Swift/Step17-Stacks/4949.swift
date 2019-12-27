//
//  4949.swift
//  Step17-Stacks
//
//  Created by Yebin Kim on 2019/12/27.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

extension Character {
    var pair: Character {
        if self == ")" {
            return "("
        } else {
            return "["
        }
    }
}

while true {
    var st = Array<Character>()
    let line = readLine()!
    
    if line == "." { break }
    
    for (_, e) in line.enumerated() {
        if e == "(" || e == "[" {
            st.append(e)
        } else if e == ")" || e == "]" {
            if st.isEmpty {
                st.append(e)
                break
            } else {
                if e.pair != st.last! {
                    break
                }
                
                st.removeLast()
            }
        }
    }
    
    if st.isEmpty {
        print("yes")
    } else {
        print("no")
    }
}

//public struct Stack<T> {
//    private var stack = Array<T>()
//
//    public mutating func push(_ element: T) {
//        stack.append(element)
//    }
//
//    public mutating func pop() {
//        stack.removeLast()
//    }
//
//    public var top: T? {
//        return stack.last
//    }
//
//    public var isEmpty: Bool {
//        return stack.isEmpty
//    }
//}
//
//extension Character {
//    var pair: Character {
//        if self == ")" {
//            return "("
//        } else {
//            return "["
//        }
//    }
//}
//
//while true {
//    var st = Stack<Character>()
//    let line = readLine()!
//
//    if line == "." { break }
//
//    for (_, e) in line.enumerated() {
//        if e == "(" || e == "[" {
//            st.push(e)
//        } else if e == ")" || e == "]" {
//            if st.isEmpty {
//                st.push(e)
//                break
//            } else {
//                if e.pair != st.top! {
//                    break
//                }
//
//                st.pop()
//            }
//        }
//    }
//
//    if st.isEmpty {
//        print("yes")
//    } else {
//        print("no")
//    }
//}
