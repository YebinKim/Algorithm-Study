//
//  10828.cpp
//  Step15-Stack
//
//  Created by 김예빈 on 2019. 9. 18..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int stack[10000];
int top = -1;

void push(int);
int pop();
bool empty();

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, num;
    string ir;
    
    cin >> n;
    
    while(n--) {
        cin >> ir;
        
        if(ir == "push") {
            cin >> num;
            push(num);
        }
        
        if(ir == "pop")
            cout << pop() << "\n";
        
        if(ir == "size")
            cout << top + 1 << "\n";
        
        if(ir == "empty")
            cout << empty() << "\n";
        
        if(ir == "top") {
            if(empty())
                cout << "-1\n";
            else
                cout << stack[top] << "\n";
        }
    }
    
    return 0;
}

void push(int input) {
    stack[++top] = input;
}

int pop() {
    int num = stack[top];
    
    if (top < 0)
        return -1;
    else {
        stack[top--] = 0;
        return num;
    }
}

bool empty() {
    if(top < 0)
        return 1;
    else
        return 0;
}
