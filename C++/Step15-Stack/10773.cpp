//
//  10773.cpp
//  Step15-Stack
//
//  Created by 김예빈 on 2019. 9. 19..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int stack[100001];
int top = -1;

void push(int);
int pop();

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, ir, result = 0;
    
    cin >> n;
    
    while(n--) {
        cin >> ir;
        
        if(ir == 0)
            pop();
        else
            push(ir);
    }
    
    for(int i = 0; i <= top; i++)
        result += stack[i];
    
    cout << result;
    
    return 0;
}

void push(int input) {
    stack[++top] = input;
}

int pop() {
    int num = stack[top];
    
    stack[top--] = 0;
    return num;
}
