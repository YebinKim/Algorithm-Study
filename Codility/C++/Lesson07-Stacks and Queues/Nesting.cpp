//
//  Nesting.cpp
//  Lesson07-Stacks and Queues
//
//  Created by Yebin Kim on 2019/11/14.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>
#include <stack>

using namespace std;

// Time Complexity O(N)
int solution(string &S) {
    stack<char> st;
    
    for(int i = 0; i < S.length(); i++) {
        if(S[i] == '(')
            st.push(S[i]);
        
        if(S[i] == ')') {
            if(st.empty()) return 0;
            
            st.pop();
        }
    }
    
    if(st.empty()) return 1;
    else return 0;
}
