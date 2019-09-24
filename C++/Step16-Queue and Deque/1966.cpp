//
//  1966.cpp
//  Step16-Queue and Deque
//
//  Created by 김예빈 on 2019. 9. 24..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int tc, m, n, search = 0, cnt, idx, temp;
    queue<int> q;
    queue<bool> sort_q;
    vector<int> maxValue;
    
    cin >> tc;
    
    while(tc--) {
        cin >> m >> n;
        
        while(!q.empty()) q.pop();
        while(!sort_q.empty()) sort_q.pop();
        maxValue.clear();
        
        for(int i = 0; i < m; i++) {
            cin >> temp;
            q.push(temp);
            maxValue.push_back(temp);
            
            if(i == n) {
                search = temp;
                sort_q.push(1);
            } else sort_q.push(0);
        }
        
        sort(maxValue.begin(), maxValue.end());
        idx = maxValue.size() - 1;
        cnt = 1;
        
        while(idx >= 0) {
            
            if(q.front() == maxValue[idx]) {
                if(sort_q.front() == 1) {
                    cout << cnt << "\n";
                    break;
                }
                
                q.pop();
                sort_q.pop();
                idx--;
                cnt++;
            } else {
                q.push(q.front());
                q.pop();
                sort_q.push(sort_q.front());
                sort_q.pop();
            }
        }
    }
    
    return 0;
}
