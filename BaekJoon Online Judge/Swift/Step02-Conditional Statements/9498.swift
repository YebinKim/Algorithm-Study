//
//  9498.swift
//  Step02-If
//
//  Created by Yebin Kim on 2019/10/27.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

var score = Int(readLine()!)

if let score = score {
    if(score >= 90) {
        print("A")
    } else if(score >= 80) {
        print("B")
    } else if(score >= 70) {
        print("C")
    } else if(score >= 60) {
        print("D")
    } else {
        print("F")
    }
}
