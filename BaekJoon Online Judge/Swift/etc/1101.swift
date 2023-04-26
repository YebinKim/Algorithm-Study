//
//  1101.swift
//  Step08-Math_1 Mathematical Thinking
//
//  Created by Yebin Kim on 2019/11/13.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

if let tc = Int(readLine()!) {
    
    for _ in 0..<tc {
        let test = readLine()!.split(separator: " ").map{ Float($0)! }
        
        var cnt: Float! = 1
        let distance = test[1] - test[0]
        
        while cnt * cnt <= distance {
            cnt += 1
        }
        
        cnt -= 1
        
        let remain = ceil((distance - cnt * cnt) / cnt)
        let answer = Int(2 * cnt + remain - 1)
        
        print(answer)
    }
}
