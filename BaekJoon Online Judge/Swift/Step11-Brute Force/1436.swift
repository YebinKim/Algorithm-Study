//
//  1436.swift
//  Step11-Brute Force
//
//  Created by Yebin Kim on 2019/11/29.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

// Timeout
if let N = Int(readLine()!) {
    var cnt = 666
    var answer = 0
    
    while true {
        let str = String(cnt)
        
        if str.contains("666") {
            answer += 1
        }
        
        if answer == N {
            print(cnt)
            break
        }
        
        cnt += 1
    }
}
