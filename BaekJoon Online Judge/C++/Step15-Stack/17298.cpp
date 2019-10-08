//
//  17298.cpp
//  Step15-Stack
//
//  Created by 김예빈 on 2019. 9. 20..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <stack>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n;
    stack<int> st;
    
    cin >> n;
    
    int A[n];
    int result[n];
    
    for(int i = 0; i < n; i++) {
        cin >> A[i];
        result[i] = -1;
    }
    
    st.push(-1);
    
    for(int i = 0; i < n; i++) {
        while(!st.empty() && A[st.top()] < A[i]) {
            result[st.top()] = A[i];
            st.pop();
        }
        st.push(i);
    }
    
    for(int i = 0; i < n; i++)
        cout << result[i] << " ";
    
    return 0;
}
