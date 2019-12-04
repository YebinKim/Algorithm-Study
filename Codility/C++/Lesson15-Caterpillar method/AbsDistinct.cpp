//
//  AbsDistinct.cpp
//  Lesson15-Caterpillar method
//
//  Created by Yebin Kim on 2019/12/05.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>
#include <limits.h>
#include <cmath>

using namespace std;

// Time Complexity O(N) or O(N*log(N))
int solution(vector<int> &A) {
    int answer = 0;
    int i = 0, j = A.size() - 1;
    long long pre = INT_MIN;
    
    while(i <= j) {
        long long front = llabs(A[i]);
        long long back = llabs(A[j]);
        
        if(back > front) {
            if(back != pre) {
                pre = back;
                answer++;
            }
            
            j--;
            
        } else {
            if(front != pre) {
                pre = front;
                answer++;
            }
            
            i++;
        }
    }
    
    return answer;
}
