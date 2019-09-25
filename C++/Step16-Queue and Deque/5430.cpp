//
//  5430.cpp
//  Step16-Queue and Deque
//
//  Created by 김예빈 on 2019. 9. 24..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int tc, n, cnt;
    bool rev, err;
    string p, str, temp;
    deque<int> dq;
    
    cin >> tc;
    
    while(tc--) {
        cnt = 0;
        rev = false;
        err = false;
        
        while(!dq.empty())
            dq.pop_back();
        
        cin >> p >> n >> str;
        
        for(int i = 0; i < str.length(); i++) {
            if ('0' <= str[i] && str[i] <= '9') {
                temp += str[i];
            } else if(str[i] == ',' || str[i] == ']') {
                if(!temp.empty()) {
                    dq.push_back(atoi(temp.c_str()));
                    cnt++;
                    temp.clear();
                    
                    if(cnt == n) break;
                }
            }
            
        }
        
        for(int i = 0; i < p.length(); i++) {
            if(p[i] == 'R') {
                rev = !rev;
            } else {
                if(dq.empty()) {
                    err = true;
                    break;
                } else {
                    if(rev)
                        dq.pop_back();
                    else
                        dq.pop_front();
                }
            }
        }
        
        if(err)
            cout << "error" << "\n";
        else {
            cout << "[";
            
            if(rev) {
                for(int i = dq.size() - 1; i >= 0; i--) {
                    cout << dq[i];
                    if(i == 0) continue;
                    cout << ",";
                }
            } else {
                for(int i = 0; i < dq.size(); i++) {
                    cout << dq[i];
                    if(i == dq.size() - 1) continue;
                    cout << ",";
                }
            }
            
            cout << "]" << "\n";
        }
    }
    
    return 0;
}
