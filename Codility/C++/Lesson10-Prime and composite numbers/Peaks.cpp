//
//  Peaks.cpp
//  Lesson10-Prime and composite numbers
//
//  Created by Yebin Kim on 2019/11/18.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

// Time Complexity O(N * log(log(N)))
int solution(vector<int> &A) {
    int answer = 0;
    vector<int> peak;
    
    for(int i = 1; i < A.size() - 1; i++)
        if(A[i] > A[i - 1] && A[i] > A[i + 1])
            peak.push_back(i);
    
    for(int i = 1; i <= peak.size(); i++) {
        if(A.size() % i == 0) {
            int block = A.size() / i;
            int cur = 0;
            
            for(const auto &p : peak)
                if(p >= cur * block && p < (cur + 1) * block)
                    cur++;
            
            if(cur == i)
                answer = cur;
        }
    }
    
    return answer;
}
