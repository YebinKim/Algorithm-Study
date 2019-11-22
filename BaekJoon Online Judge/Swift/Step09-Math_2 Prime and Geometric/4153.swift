//
//  4153.swift
//  Step09-Math_2 Prime and Geometric
//
//  Created by Yebin Kim on 2019/11/22.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

while true {
    let triangle = readLine()!.split(separator: " ").map{ Int($0)! * Int($0)! }.sorted()
    
    let bp = triangle.reduce(0){ $0 + $1 }
    if bp == 0 { break }
    
    if triangle[2] == triangle[1] + triangle[0] {
        print("right")
    } else {
        print("wrong")
    }
}
