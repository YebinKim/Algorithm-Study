//
//  11021.swift
//  Step03-For
//
//  Created by Yebin Kim on 2019/10/29.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

let tc: Int! = Int(readLine()!)

for i in 1...tc {
    let input: String! = readLine()
    let arr = input.components(separatedBy: " ")
    
    let answer = Int(arr[0])! + Int(arr[1])!
    
    print("Case #\(i): \(answer)")
}
