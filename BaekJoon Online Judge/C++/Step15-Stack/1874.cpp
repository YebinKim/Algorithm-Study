//
//  1874.cpp
//  Step15-Stack
//
//  Created by 김예빈 on 2019. 9. 20..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, cur = 0, cnt = 1;
    bool check = true;
    stack<int> st;
    vector<char> result;
    vector<char>::iterator iter;
    
    cin >> n;
    
    int num[n];
    
    for(int i = 0; i < n; i++)
        cin >> num[i];
    
    while(1) {
        for(int i = cnt; i <= num[cur]; i++) {
            st.push(i);
            result.push_back('+');
            cnt++;
        }
        
        if(st.top() == num[cur] && !st.empty()) {
            st.pop();
            result.push_back('-');
        } else {
            check = false;
            break;
        }
        
        cur++;
        if(cur == n) break;
    }
    
    if(check) {
        for(iter = result.begin(); iter != result.end(); iter++)
            cout << *iter << "\n";
    } else {
        cout << "NO";
    }
    
    return 0;
}
