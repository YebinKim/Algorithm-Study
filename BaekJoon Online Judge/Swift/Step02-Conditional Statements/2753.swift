//
//  2753.swift
//  Step02-If
//
//  Created by Yebin Kim on 2019/10/28.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

var year = Int(readLine()!)

if let year = year {
    if(year % 4 == 0 && year % 100 != 0) {
        print(1)
    } else if(year % 400 == 0) {
        print(1)
    } else {
        print(0)
    }
}
