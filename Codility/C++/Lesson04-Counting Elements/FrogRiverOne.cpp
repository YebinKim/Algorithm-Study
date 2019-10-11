//
//  FrogRiverOne.cpp
//  Lesson04-Counting Elements
//
//  Created by 김예빈 on 2019. 10. 11..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <vector>
#include <map>

using namespace std;

int solution(int X, vector<int> &A) {
    map<int, int> leaves;
    int answer = -1;
    
    for(int i = 1; i <= X; i++)
        leaves[i] = 1;
    
    for(int i = 0; i < A.size(); i++) {
        if(A[i] <= X)
            leaves.erase(A[i]);
        
        if(leaves.empty()) {
            answer = i;
            break;
        }
    }
    
    return answer;
}
