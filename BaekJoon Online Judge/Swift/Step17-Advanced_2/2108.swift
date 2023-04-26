//
//  2108.swift
//  Step11-Sorting
//
//  Created by Yebin Kim on 2019/12/1.
//  Copyright © 2019 김예빈. All rights reserved.
//

import Foundation

if let N = Int(readLine()!) {
    var arr = Array<Int>()
    var dic = Dictionary<Int, Int>()
    var modeValue = 0
    
    for _ in 0..<N {
        arr.append(Int(readLine()!)!)
        dic[arr.last!] = ((dic[arr.last!] != nil) ? dic[arr.last!]! : 0 ) + 1
        modeValue = (modeValue < dic[arr.last!]!) ? dic[arr.last!]! : modeValue
    }
    
    let arithmeticalAvg = round(Double(arr.reduce(0) { $0 + $1 }) / Double(arr.count))
    let medianValue = arr.sorted()[N / 2]
    let sortDic = dic.filter{ $0.value == modeValue }.sorted{ $0.key < $1.key }
    let range = arr.max()! - arr.min()!
    
    print(Int(arithmeticalAvg))
    print(medianValue)
    print(sortDic[sortDic.count > 1 ? 1 : 0].key)
    print(range)
}
