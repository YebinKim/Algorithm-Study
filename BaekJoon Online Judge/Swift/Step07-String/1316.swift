//
//  1316.swift
//  Step07-String
//
//  Created by Yebin Kim on 2019/11/11.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

let tc = Int(readLine()!)!
var answer = tc

for _ in 0..<tc {
    let input = readLine()!
    var check = Array<Character>()
    
    var before = Character("-")
    
    for (_, c) in input.enumerated() {
        if check.contains(c) {
            answer -= 1
            break
        } else if c != before {
            check.append(before)
            before = c
        }
    }
}

print(answer)
