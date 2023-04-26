//
//  2231.swift
//  Step11-Brute Force
//
//  Created by Yebin Kim on 2019/11/26.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

if let N = Int(readLine()!) {
    var answer = 0
    let numbers = Array<String>(stride(from: 1, to: N + 1, by: 1).map{ String($0) })
    
    for i in 0..<N {
        let elementSum = numbers[i].compactMap{ Int(String($0)) }.reduce(i + 1){ $0 + $1 }
        
        if elementSum == N {
            answer = Int(numbers[i])!
            break
        }
    }
    
    print(answer)
}
