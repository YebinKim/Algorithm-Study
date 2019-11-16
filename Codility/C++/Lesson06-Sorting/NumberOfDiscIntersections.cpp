//
//  NumberOfDiscIntersections.cpp
//  Lesson06-Sorting
//
//  Created by Yebin Kim on 2019/11/16.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Time Complexity O(N*log(N)) or O(N)
int solution(vector<int> &A) {
    int answer = 0;
    int circle = 0, left = 0;
    
    if(A.size() < 2) return 0;
    
    vector<long> leftEdges;
    vector<long> rightEdges;

    for(int i = 0; i < A.size(); i++) {
        long r = (long)A[i];
        
        long left = i - r;
        leftEdges.push_back(left);

        long right = i + r;
        rightEdges.push_back(right);
    }
    
    sort(leftEdges.begin(), leftEdges.end());
    sort(rightEdges.begin(), rightEdges.end());

    for(int right = 0; right < A.size(); right++) {
        while ((left < A.size()) && (leftEdges[left] <= rightEdges[right])) {
            left++;
            circle++;
        }

        answer += --circle;

        if (answer > 10000000) return -1;
    }
    
    return answer;
}
