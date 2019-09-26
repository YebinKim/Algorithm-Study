//
//  1655.cpp
//  Step20-Priority Queue
//
//  Created by 김예빈 on 2019. 9. 25..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <queue>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, x;
    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;
    
    cin >> n;
    
    while(n--) {
        cin >> x;
        
        if(maxHeap.empty())
            maxHeap.push(x);
        else if(maxHeap.top() < x)
            minHeap.push(x);
        else
            maxHeap.push(x);
        
        if (maxHeap.size() < minHeap.size()) {
            maxHeap.push(minHeap.top());
            minHeap.pop();
        } else if (maxHeap.size() > minHeap.size() + 1) {
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        }
        
        cout << maxHeap.top() << "\n";
    }
    
    return 0;
}
