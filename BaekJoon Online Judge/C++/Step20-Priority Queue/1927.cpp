//
//  1927.cpp
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
    priority_queue<int, vector<int>, greater<int>> pq;
    
    cin >> n;
    
    while(n--) {
        cin >> x;
        
        if(x == 0) {
            if(pq.empty())
                cout << "0\n";
            else {
                cout << pq.top() << "\n";
                pq.pop();
            }
        } else pq.push(x);
    }
    
    return 0;
}
