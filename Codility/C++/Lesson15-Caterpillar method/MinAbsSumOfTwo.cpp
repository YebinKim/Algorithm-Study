//
//  MinAbsSumOfTwo.cpp
//  Lesson15-Caterpillar method
//
//  Created by Yebin Kim on 2019/12/12.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

// Time Complexity O(N * log(N))
int solution(vector<int> &A) {
    sort(A.begin(), A.end());
    
    int answer = A[A.size() - 1] * 2;
    int front = 0;
    int end = A.size() - 1;
    
    if(A[front] >= 0) return 2 * A[front];
    else if(A[end] < 0) return 2 * abs(A[end]);
    
    while(front <= end) {
        int cur = A[front] + A[end];
        answer = min(answer, abs(cur));
        
        if(cur == 0)
            return 0;
        else if(cur < 0)
            front++;
        else
            end--;
    }
    
    return answer;
}
