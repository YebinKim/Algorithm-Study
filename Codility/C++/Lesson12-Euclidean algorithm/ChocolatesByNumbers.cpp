//
//  ChocolatesByNumbers.cpp
//  Lesson12-Euclidean algorithm
//
//  Created by Yebin Kim on 2019/11/20.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>

using namespace std;

int euclidean(int a, int b) {
    if(a % b == 0)
        return b;
    else
        return euclidean(b, a % b);
}

// Time Complexity O(log(N + M))
int solution(int N, int M) {
    if(euclidean(N, M) == 1)
        return N;
    else
        return N / euclidean(N, M);
}
