//
//  18258.cpp
//  Step16-Queues and Deques
//
//  Created by Yebin Kim on 2020/01/13.
//  Copyright © 2020 김예빈. All rights reserved.
//

#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    queue<int> q;
    int n, num;
    string op;
    
    cin >> n;
    
    while(n--) {
        cin >> op;
        
        if(op == "push") {
            cin >> num;
            q.push(num);
        }
        
        if(op == "pop") {
            if (q.empty()) {
                cout << "-1" << "\n";
            } else {
                cout << q.front() << "\n";
                q.pop();
            }
        }
        
        if(op == "size")
            cout << q.size() << "\n";
        
        if(op == "empty")
            cout << q.empty() << "\n";
        
        if(op == "front") {
            if (q.empty())
                cout << "-1" << "\n";
            else
                cout << q.front() << "\n";
        }
        
        if(op == "back") {
            if (q.empty())
                cout << "-1" << "\n";
            else
                cout << q.back() << "\n";
        }
    }

    return 0;
}
