//
//  4673.swift
//  Step06-Function
//
//  Created by Yebin Kim on 2019/11/5.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

func getSelfNumber(_ num : Int) -> Int {
    var div = num
    var ret = num
    
    while div > 0 {
        ret += div % 10
        div /= 10
    }
    
    return ret
}

var selfNumber = Array<Bool>(repeating: true, count: 10000)
selfNumber[0] = false

for i in 1..<10000 {
    if selfNumber[i - 1] {
        var selfNum = i - 1
        
        while true {
            selfNum = getSelfNumber(selfNum)
            
            if selfNum >= 10000 { break }
            
            selfNumber[selfNum] = false
        }
    }
}

for (i, e) in selfNumber.enumerated() {
    if e {
        print(i)
    }
}
