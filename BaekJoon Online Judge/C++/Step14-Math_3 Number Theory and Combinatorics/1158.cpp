//
//  1158.cpp
//  Step14-Math_3 Number Theory and Combinatorics
//
//  Created by Yebin Kim on 2020/01/31.
//  Copyright © 2020 김예빈. All rights reserved.
//

#include <iostream>
#include <queue>
using namespace std;

// Josephus problem
int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, m;
    cin >> n >> m;
    
    queue<int> q;
    for(int i = 1; i <= n; i++)
        q.push(i);
    
    cout << "<";
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < m - 1; j++) {
            q.push(q.front());
            q.pop();
        }
        cout << q.front() << ", ";
        q.pop();
    }
    cout << q.front() << ">";
    
    return 0;
}
