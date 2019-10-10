//
//  TapeEquilibrium.cpp
//  Lesson03-Time Complexity
//
//  Created by 김예빈 on 2019. 10. 10..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <vector>
#include <cmath>

using namespace std;

int solution(vector<int> &A) {
    int size = A.size();
    int sum = 0, bound = A[0], diff, answer;
    
    for(int i = 1; i < size; i++)
        sum += A[i];
    
    answer = abs(bound - sum);
    
    for (int i = 2; i < size; i++) {
        bound += A[i - 1];
        sum -= A[i - 1];
        
        diff = abs(bound - sum);
        if (diff < answer)
            answer = diff;
    }
    
    return answer;
}
