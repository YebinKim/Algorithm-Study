//
//  PermMissingElem.cpp
//  Lesson03-Time Complexity
//
//  Created by 김예빈 on 2019. 10. 10..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <vector>

using namespace std;

int solution(vector<int> &A) {
    int sum = 0, answer = (A.size() + 1) * ((A.size() + 1) + 1) / 2;
    
    for(int i = 0; i < A.size(); i++)
        sum += A[i];
    
    answer -= sum;
    
    return answer;
}
