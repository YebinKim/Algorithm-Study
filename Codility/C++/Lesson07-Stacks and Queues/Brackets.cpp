//
//  Brackets.cpp
//  Lesson07-Stacks and Queues
//
//  Created by 김예빈 on 2019. 10. 11..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <string>
#include <stack>

using namespace std;

int solution(string &S) {
    stack<string> brackets;
    string cmp;
    
    for(int i = 0; i < S.length(); i++) {
        switch(S[i]) {
            case '{':
                cmp.append("{");
                brackets.push("}");
                break;
            case '[':
                cmp.append("[");
                brackets.push("]");
                break;
            case '(':
                cmp.append("(");
                brackets.push(")");
                break;
            default:
                if(!brackets.empty()) {
                    cmp.append(brackets.top());
                    brackets.pop();
                } else
                    return 0;
                break;
                    
        }
    }
    
    if(S == cmp && brackets.empty())
        return 1;
    else
        return 0;
}
