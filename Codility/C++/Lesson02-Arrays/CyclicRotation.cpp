//
//  CyclicRotation.cpp
//  Lesson02-Arrays
//
//  Created by 김예빈 on 2019. 10. 9..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <vector>

using namespace std;

vector<int> solution(vector<int> &A, int K) {
    int size = A.size();
    vector<int> answer(size, 0);
    
    for(int i = 0; i < A.size(); i++)
        answer[(i + K) % size] = A[i];
    
    return answer;
}
