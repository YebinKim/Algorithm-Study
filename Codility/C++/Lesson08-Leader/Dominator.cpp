//
//  Dominator.cpp
//  Lesson08-Leader
//
//  Created by 김예빈 on 2019. 10. 11..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <vector>
#include <map>

using namespace std;

int solution(vector<int> &A) {
    map<int, int> counter;
    int half = A.size() / 2 + 0.5;
    int answer = -1, max = 0;
    
    for(int i = 0; i < A.size(); i++) {
        counter[A[i]] += 1;
        
        if(counter[A[i]] > half)
            answer = i;
    }
    
    return answer;
}
