//
//  1021.cpp
//  Step16-Queue and Deque
//
//  Created by 김예빈 on 2019. 9. 24..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <deque>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, m, input, idx, cnt = 0, left, right;
    deque<int> dq;
    deque<int>::iterator it;
    
    cin >> n >> m;
    
    for(int i = 1; i <= n; i++)
        dq.push_back(i);
    
    for(int i = 0; i < m; i++) {
        cin >> input;
        
        if(dq.front() == input)
            dq.pop_front();
        else {
            idx = 1;
            
            for(it = dq.begin(); it < dq.end(); it++) {
                if(*it == input) break;
                
                idx++;
            }
            
            left = idx - 1;
            right = dq.size() - idx + 1;
            
            if(left >= right) {
                for(int j = 0; j < right; j++) {
                    dq.push_front(dq.back());
                    dq.pop_back();
                }
                
                cnt += right;
                dq.pop_front();
                
            } else if(left <= right) {
                for(int j = 0; j < left; j++) {
                    dq.push_back(dq.front());
                    dq.pop_front();
                }
                
                cnt += left;
                dq.pop_front();
            }
        }
    }
    
    cout << cnt << "\n";
    
    return 0;
}
