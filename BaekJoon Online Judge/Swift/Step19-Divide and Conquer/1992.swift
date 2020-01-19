//
//  1992.swift
//  Step17-Divide and Conquer
//
//  Created by Yebin Kim on 2020/01/20.
//  Copyright © 2020 김예빈. All rights reserved.
//

func divide(_ x: Int, _ y: Int, size: Int, image: [[Int]]) {
    let color = image[y][x]
    var check = true
    
    for i in y..<(y + size) {
        if !check { break }
        
        for j in x..<(x + size) {
            if color != image[i][j] {
                check = false
                break
            }
        }
    }
    
    if check {
        print(color, terminator: "")
    } else {
        print("(", terminator: "")
        divide(x, y, size: size / 2, image: image)
        divide(x + size / 2, y, size: size / 2, image: image)
        divide(x, y + size / 2, size: size / 2, image: image)
        divide(x + size / 2, y + size / 2, size: size / 2, image: image)
        print(")", terminator: "")
    }
}

var image = [[Int]]()

for _ in 0..<Int(readLine()!)! {
    image.append(readLine()!.compactMap({ Int(String($0))! }))
}

if image.count <= 1 {
    print("(\(image.first!.first!))")
} else {
    divide(0, 0, size: image.count, image: image)
}
