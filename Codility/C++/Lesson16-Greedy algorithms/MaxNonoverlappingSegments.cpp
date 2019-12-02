//
//  MaxNonoverlappingSegments.cpp
//  Lesson16-Greedy algorithms
//
//  Created by Yebin Kim on 2019/12/02.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

// Time Complexity O(N)
int solution(vector<int> &A, vector<int> &B) {
    
    if(A.size() < 1) return 0;
    
    int answer = 1;
    int endPoint = B[0];
    
    for(int i = 1; i < A.size(); i++) {
        if(A[i] > endPoint) {
            answer++;
            endPoint = B[i];
        }
    }
    
    return answer;
}
