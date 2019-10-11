//
//  PassingCars.cpp
//  Lesson05-Prefix Sums
//
//  Created by 김예빈 on 2019. 10. 11..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <vector>

using namespace std;

int solution(vector<int> &A) {
    long answer = 0, cnt = 0;
    
    for(int i = 0; i < A.size(); i++) {
        if(A[i] == 1)
            answer += cnt;
        else
            cnt++;
    }
    
    if(answer > 1000000000)
        return -1;
    else
        return answer;
}
