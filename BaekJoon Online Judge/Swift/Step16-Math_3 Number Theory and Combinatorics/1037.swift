//
//  1037.swift
//  Step16-Math_3 Number Theory and Combinatorics
//
//  Created by Yebin Kim on 2019/12/22.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

if let _ = Int(readLine()!) {
    let factor = readLine()!.split(separator: " ").map{ Int($0)! }
    print(factor.min()! * factor.max()!)
}
