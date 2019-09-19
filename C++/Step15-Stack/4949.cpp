//
//  4949.cpp
//  Step15-Stack
//
//  Created by 김예빈 on 2019. 9. 19..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <stack>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    string str;
    bool check;
    
    while(1) {
        getline(cin, str);
        stack<char> st;
        
        check = true;
        
        if(str[0] == '.' && str.length() == 1)
            break;
        
        for(int i = 0; i < str.length(); i++) {
            if(str[i] == '(')
                st.push(str[i]);
            
            if(str[i] == ')') {
                if (!st.empty() && st.top() == '(')
                    st.pop();
                else {
                    check = false;
                    break;
                }
            }
            
            if(str[i] == '[')
                st.push(str[i]);
            
            if(str[i] == ']') {
                if (!st.empty() && st.top() == '[')
                    st.pop();
                else {
                    check = false;
                    break;
                }
            }
        }
        
        if(check && st.empty())
            cout << "yes\n";
        else
            cout << "no\n";
    }
    
    return 0;
}
