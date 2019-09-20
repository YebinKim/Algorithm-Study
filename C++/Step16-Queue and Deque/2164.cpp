//
//  2164.cpp
//  Step16-Queue and Deque
//
//  Created by 김예빈 on 2019. 9. 20..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <deque>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n;
    deque<int> dq;
    
    cin >> n;
    
    for(int i = 1; i <= n; i++)
        dq.push_back(i);
    
    while(dq.size() != 1) {
        dq.pop_front();
        dq.push_back(dq.front());
        dq.pop_front();
    }
    
    cout << dq.front();
    
    return 0;
}

// Timeout
//#include <iostream>
//using namespace std;
//
//int queue[500000];
//int rear = 0;
//
//void push(int);
//int pop();
//
//int main(int argc, const char * argv[]) {
//    cin.tie(NULL);
//    ios::sync_with_stdio(false);
//
//    int n, temp;
//
//    cin >> n;
//
//    for(int i = 1; i <= n; i++)
//        push(i);
//
//    while(rear != 1) {
//        pop();
//        temp = pop();
//        push(temp);
//    }
//
//    cout << queue[rear];
//
//    return 0;
//}
//
//void push(int input) {
//    queue[rear++] = input;
//}
//
//int pop() {
//    int outout = queue[0];
//    rear--;
//
//    for(int i = 0; i < rear; i++)
//        queue[i] = queue[i + 1];
//
//    return outout;
//}
