//
//  PermCheck.cpp
//  Lesson04-Counting Elements
//
//  Created by 김예빈 on 2019. 10. 11..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> &A) {
    int answer = 1;
    
    sort(A.begin(), A.end());
    
    for(int i = 0; i < A.size(); i++)
        if(i + 1 != A[i]) {
            answer = 0;
            break;
        }
    
    return answer;
}
