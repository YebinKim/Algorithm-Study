//
//  9012.cpp
//  Step15-Stack
//
//  Created by 김예빈 on 2019. 9. 19..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <string.h>
using namespace std;

char stack[50];
int top = -1;

bool VPS(string);
void push(int);
char pop();
bool empty();

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n;
    string str;
    
    cin >> n;
    
    while(n--) {
        cin >> str;
        
        if(VPS(str))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    
    return 0;
}

bool VPS(string input) {
    memset(stack, 0, sizeof(stack));
    top = -1;
    int check = 0;
    
    for(int i = 0; i < input.length(); i++) {
        if(input[i]  == '(')
            push(input[i]);
        else
            check = pop();
        
        if(check == -1)
            return false;
    }
    
    return empty();
}

void push(int input) {
    stack[++top] = input;
}

char pop() {
    int num = stack[top];
    
    if(top < 0)
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
