//
//  TieRopes.cpp
//  Lesson16-Greedy algorithms
//
//  Created by Yebin Kim on 2019/12/02.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

// Time Complexity O(N)
int solution(int K, vector<int> &A) {
    int answer = 0;
    int sum = 0;
    
    for(int i = 0; i < A.size(); i++) {
        sum += A[i];
        
        if(sum >= K) {
            answer++;
            sum = 0;
        }
    }
    
    return answer;
}
