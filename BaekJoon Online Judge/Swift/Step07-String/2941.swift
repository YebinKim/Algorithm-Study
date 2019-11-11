//
//  2941.swift
//  Step07-String
//
//  Created by Yebin Kim on 2019/11/11.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

if var input = readLine() {
    let croatian = ["c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="]
    
    for c in croatian {
        if input.contains(c) {
            input = input.replacingOccurrences(of: c, with: "0")
        }
    }
    
    print(input.count)
}
