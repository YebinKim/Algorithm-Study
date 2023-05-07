//
//  main.swift
//  CodingTest
//
//  Created by vivi.
//

import Foundation

let input = readLine()!.split(separator: " ").map { Int($0)! }
var numbers = readLine()!.split(separator: " ").map { Int($0)! }
var count: Int = 0
var result: Int = -1

mergeSort(numbers, front: 0, rear: numbers.count - 1)
print(result)

func mergeSort(_ numbers: [Int], front: Int, rear: Int) {
    guard numbers.count > 1 else { return }
    if front < rear, count < input[1] {
        let mid = (front + rear) / 2
        mergeSort(numbers, front: front, rear: mid)
        mergeSort(numbers, front: mid + 1, rear: rear)
        merge(front: front, mid: mid, rear: rear)
    }
}

func merge(front: Int, mid: Int, rear: Int) {
    var i = front
    var j = mid + 1
    var t = 0
    var temp: [Int] = []
    
    while i <= mid, j <= rear {
        if numbers[i] <= numbers[j] {
            temp.append(numbers[i])
            i += 1
        } else {
            temp.append(numbers[j])
            j += 1
        }
    }
    while i <= mid {
        temp.append(numbers[i])
        i += 1
    }
    while j <= rear {
        temp.append(numbers[j])
        j += 1
    }
    
    i = front
    while i <= rear {
        count += 1
        if count == input[1] {
            result = temp[t]
            break
        }
        
        numbers[i] = temp[t]
        i += 1
        t += 1
    }
}
