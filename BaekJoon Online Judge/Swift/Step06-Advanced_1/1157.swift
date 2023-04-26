//
//  1157.swift
//  Step07-String
//
//  Created by Yebin Kim on 2019/11/10.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

if let input = readLine()?.lowercased() {
    var dic: [Character : Int] = [:]
    
    for (_, c) in input.enumerated() {
        if let _ = dic[c] {
            dic[c]! += 1
        } else {
            dic[c] = 1
        }
    }
    
    let order = Array(dic).sorted{ $0.value > $1.value }
    let dupl = dic.filter{ $0.value == order.first?.value }
    
    if dupl.count != 1 {
        print("?")
    } else {
        print(order.first!.key.uppercased())
    }
}
