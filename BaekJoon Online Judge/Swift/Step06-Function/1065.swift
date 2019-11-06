//
//  1065.swift
//  Step06-Function
//
//  Created by Yebin Kim on 2019/11/6.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

if let n = Int(readLine()!) {
    if n < 100 {
        print(n)
    } else {
        var count = 99 + (n / 100 - 1) * 5
        
        for k in (n / 100) * 100...n {
            if k / 100 + k % 10 == 2 * ((k / 10) % 10) {
                count += 1
            }
        }
        
        print(count)
    }
}
