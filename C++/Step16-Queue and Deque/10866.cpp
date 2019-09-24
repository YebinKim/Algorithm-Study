//
//  10866.cpp
//  Step16-Queue and Deque
//
//  Created by 김예빈 on 2019. 9. 24..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int deque[10000];
int rear = 0;

void push_front(int);
void push_back(int);
int pop_front();
int pop_back();
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
        
        if(ir == "push_front") {
            cin >> num;
            push_front(num);
        }
        
        if(ir == "push_back") {
            cin >> num;
            push_back(num);
        }
        
        if(ir == "pop_front")
            cout << pop_front() << "\n";
        
        if(ir == "pop_back")
            cout << pop_back() << "\n";
        
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

void push_front(int input) {
    for(int i = rear; i > 0; i--)
        deque[i] = deque[i - 1];
    
    rear++;
    deque[0] = input;
}

void push_back(int input) {
    deque[rear++] = input;
}

int pop_front() {
    if(empty())
        return -1;
    else {
        int front = deque[0];
        rear--;
        
        for(int i = 0; i < rear; i++)
            deque[i] = deque[i + 1];
        
        return front;
    }
}

int pop_back() {
    if(empty())
        return -1;
    else {
        int back = deque[--rear];
        
        return back;
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
        return deque[0];
}

int back() {
    if(empty())
        return -1;
    else
        return deque[rear - 1];
}
