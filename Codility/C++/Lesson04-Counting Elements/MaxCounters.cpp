//
//  MaxCounters.cpp
//  Lesson04-Counting Elements
//
//  Created by 김예빈 on 2019. 10. 11..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <vector>

using namespace std;

vector<int> solution(int N, vector<int> &A) {
    vector<int> answer(N, 0);
    int maxNum = 0, storeNum = 0;
    
    for(int i = 0; i < A.size(); i++) {
        if(A[i] > N)
            storeNum = maxNum;
        else {
            if(answer[A[i] - 1] < storeNum)
                answer[A[i] - 1] = storeNum + 1;
            else
                answer[A[i] - 1] += 1;
            
            if(answer[A[i] - 1] > maxNum)
                maxNum = answer[A[i] - 1];
        }
    }
    
    for(int i = 0; i < N; i++)
        if(answer[i] < storeNum)
            answer[i] = storeNum;
    
    return answer;
}
