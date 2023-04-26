//
//  10809.swift
//  Step07-String
//
//  Created by Yebin Kim on 2019/11/9.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

if let S = readLine() {
    var answer = Array<Int>(repeating: -1, count: 26)
    
    for (n, c) in S.enumerated() {
        let idx = Int(String(UnicodeScalar(String(c))!.value))! - 97
        if answer[idx] == -1 {
            answer[idx] = n
        }
    }
    
    answer.forEach {
        print($0, terminator: " ")
    }
}
