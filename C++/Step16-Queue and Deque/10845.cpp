//
//  10845.cpp
//  Step16-Queue and Deque
//
//  Created by 김예빈 on 2019. 9. 20..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int queue[10000];
int rear = 0;

void push(int);
int pop();
bool empty();
int front();
int back();

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
            cout << rear << "\n";
        
        if(ir == "empty")
            cout << empty() << "\n";
        
        if(ir == "front")
            cout << front() << "\n";
        
        if(ir == "back")
            cout << back() << "\n";
    }

    return 0;
}

void push(int input) {
    queue[rear++] = input;
}

int pop() {
    if(empty())
        return -1;
    else {
        int outout = queue[0];
        rear--;
        
        for(int i = 0; i < rear; i++)
            queue[i] = queue[i + 1];
        
        return outout;
    }
}

bool empty() {
    if(rear == 0)
        return true;
    else
        return false;
}

int front() {
    if(empty())
        return -1;
    else
        return queue[0];
}

int back() {
    if(empty())
        return -1;
    else
        return queue[rear - 1];
}
