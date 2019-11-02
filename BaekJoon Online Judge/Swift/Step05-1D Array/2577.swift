//
//  2577.swift
//  Step05-1D Array
//
//  Created by Yebin Kim on 2019/11/2.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

var mulNum: Int!

if let a = readLine(), let b = readLine(), let c = readLine() {
    mulNum = Int(a)! * Int(b)! * Int(c)!
}

var answer = String(mulNum).map{ Int(String($0))! }
for i in 0..<10 {
    print(answer.filter{ $0 == i }.count)
}
