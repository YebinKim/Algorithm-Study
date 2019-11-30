//
//  CountDistinctSlices.cpp
//  Lesson15-Caterpillar method
//
//  Created by Yebin Kim on 2019/11/30.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

// Time Complexity O(N)
int solution(int M, vector<int> &A) {
    int answer = 0;
    int front = 0, back = 0;
    vector<bool> seen(M + 1);
    
    while(front < A.size() && back < A.size()) {
        if(seen[A[back]] == false) {
            answer += (back - front + 1);
            
            if(answer >= 1000000000) return 1000000000;
            
            seen[A[back]] = true;
            back++;
        } else {
            seen[A[front]] = false;
            front++;
        }
    }
    
    return answer;
}
