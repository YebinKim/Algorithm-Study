//
//  NumberSolitaire.cpp
//  Lesson17-Dynamic programming
//
//  Created by Yebin Kim on 2019/12/04.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>

using namespace std;

// Time Complexity O(N)
int solution(vector<int> &A) {
    int answer[A.size()];
    answer[0] = A[0];
    
    for(int i = 1; i < A.size(); i++) {
        answer[i] = INT_MIN;
        
        for(int j = 1; j <= 6; j++) {
            if(i - j < 0) break;
            
            answer[i] = max(answer[i], answer[i - j] + A[i]);
        }
    }
    
    return answer[A.size() - 1];
}
