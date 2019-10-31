//
//  10818.swift
//  Step05-1D Array
//
//  Created by Yebin Kim on 2019/10/31.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

if let _ = readLine() {
    let list: [Int]? = readLine()?.split(separator: " ").map{ Int($0)! }.sorted(by: { $0 < $1 })
    
    print(list![0], (list?.last)!)
}

//if let _ = readLine() {
//    let list = (readLine()!).split(separator: " ").map { Int($0)! }
//
//    var max = list[0]
//    var min = list[0]
//
//    for number in list {
//        if min > number {
//            min = number
//        }
//
//        if max < number {
//            max = number
//        }
//    }
//
//    print(min, max)
//}
