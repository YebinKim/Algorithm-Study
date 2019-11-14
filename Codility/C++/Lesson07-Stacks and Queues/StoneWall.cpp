//
//  StoneWall.cpp
//  Lesson07-Stacks and Queues
//
//  Created by Yebin Kim on 2019/11/14.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

// Time Complexity O(N)
int solution(vector<int> &H) {
    int answer = 0;
    stack<int> stone;
    
    for(int i = 0; i < H.size(); i++) {
        while(!stone.empty() && stone.top() > H[i])
            stone.pop();
        
        if(stone.empty() || stone.top() < H[i]) {
            stone.push(H[i]);
            answer++;
        }
    }
    
    return answer;
}
