//
//  Fish.cpp
//  Lesson07-Stacks and Queues
//
//  Created by Yebin Kim on 2019/10/22.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <vector>
#include <stack>

using namespace std;

int solution(vector<int> &A, vector<int> &B) {
    int answer = 0;
    stack<int> downFish;
    
    for(int i = 0; i < A.size(); i++) {
        if(B[i] == 0) {
            if(downFish.empty())
                answer++;
            else {
                while(!downFish.empty() && downFish.top() < A[i])
                    downFish.pop();
                    
                if(downFish.empty())
                    answer++;
            }
        } else
            downFish.push(A[i]);
    }
    
    answer += downFish.size();
    
    return answer;
}
