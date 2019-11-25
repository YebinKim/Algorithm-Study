//
//  Ladder.cpp
//  Lesson13-Fibonacci numbers
//
//  Created by Yebin Kim on 2019/11/25.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Time Complexity O(L)
vector<int> solution(vector<int> &A, vector<int> &B) {
    int L = A.size();
    long long max = pow(2, 30);

    long long fib[L + 1];
    fib[0] = 1;
    fib[1] = 1;
    fib[2] = 2;

    for(int i = 3; i < L + 1; i++)
        fib[i] = (fib[i - 1] + fib[i - 2]) % max;
    
    vector<int> answer(L);

    for(int i = 0; i < L; i++)
        answer[i] = fib[A[i]] % (int)pow(2, B[i]);

    return answer;
}
