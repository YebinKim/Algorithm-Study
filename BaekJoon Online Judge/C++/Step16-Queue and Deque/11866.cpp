//
//  11866.cpp
//  Step16-Queue and Deque
//
//  Created by 김예빈 on 2019. 9. 23..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <queue>
using namespace std;

void josephusProblem(queue<int>&, int);

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    queue<int> queue;
    int n, k;
    
    cin >> n >> k;
    
    for(int i = 1; i <= n; i++)
        queue.push(i);
    
    josephusProblem(queue, k);
    
    return 0;
}

void josephusProblem(queue<int>& queue, int k) {
    cout << "<";
    
    while(!queue.empty()) {
        for(int i = 1; i < k; i++) {
            queue.push(queue.front());
            queue.pop();
        }
        
        cout << queue.front();
        queue.pop();
        
        if(queue.size() != 0)
            cout << ", ";
    }
    
    cout << ">";
}
