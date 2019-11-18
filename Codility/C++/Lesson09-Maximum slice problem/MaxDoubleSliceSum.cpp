//
//  MaxDoubleSliceSum.cpp
//  Lesson09-Maximum slice problem
//
//  Created by Yebin Kim on 2019/11/18.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

// Time Complexity O(N)
int solution(vector<int> &A) {
    int answer = 0;
    int size = A.size();
    
    if (size <= 3) return 0;
    
    int* firsts = new int[size];
    int* seconds = new int[size];
    
    memset(firsts, 0, sizeof(int) * size);
    memset(seconds, 0, sizeof(int) * size);
    
    for(int i = 1; i < size - 1; i++) {
        // Kadane's Algorithm
        firsts[i] = max(firsts[i - 1] + A[i], 0);
        seconds[size - i - 1] = max(seconds[size - i] + A[size - i - 1], 0);
    }
    
    for(int i = 1; i < size - 1; i++)
        answer = max(answer, firsts[i - 1] + seconds[i + 1]);
    
    return answer;
}
