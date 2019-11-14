//
//  MaxSliceSum.cpp
//  Lesson09-Maximum slice problem
//
//  Created by Yebin Kim on 2019/11/14.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

// Time Complexity O(N)
int solution(vector<int> &A) {
    int max = A[0];
    int answer = A[0];
    
    for(int i = 1; i < A.size(); i++) {
        max = A[i] > max + A[i] ? A[i] : max + A[i];
        answer = answer > max ? answer : max;
    }
    
    return answer;
}
