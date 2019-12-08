//
//  1904.swift
//  Step14-Dynamic Programming_1
//
//  Created by Yebin Kim on 2019/12/08.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

var answer = [1, 2]

if let input = Int(readLine()!) {
    for i in 2...(input - 1) {
        answer.append(((answer[i - 1] + answer[i - 2]) % 15746))
    }
}

print(answer.last!)
