//
//  10952.swift
//  Step04-While
//
//  Created by Yebin Kim on 2019/10/30.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

while true {
    let input: String! = readLine()
    let arr = input.components(separatedBy: " ")
    
    let first = Int(arr[0])!
    let second = Int(arr[1])!
    
    if first == 0 && second == 0 { break }
    
    print(first + second)
}
