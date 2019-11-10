//
//  2908.swift
//  Step07-String
//
//  Created by Yebin Kim on 2019/11/10.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

if let input = readLine() {
    let num = input.split(separator: " ").map{ Int(String($0.reversed()))! }
    print(num.max()!)
}
