//
//  CountTriangles.cpp
//  Lesson15-Caterpillar method
//
//  Created by Yebin Kim on 2019/11/30.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Time Complexity O(N^2)
int solution(vector<int> &A) {
    
    if(A.size() < 1) return 0;
    
    int answer = 0;
    int front = 0, back = 0;
    sort(A.begin(), A.end());
    
    for(int i = 0; i < A.size() - 2; i++){
        front = i + 1;
        back = i + 2;
        
        while(front < A.size() - 1) {
            if(back < A.size() && (A[i] + A[front]) > A[back]) {
                back++;
            } else {
                answer += (back - front - 1);
                front++;
            }
        }
    }
    
    return answer;
}
