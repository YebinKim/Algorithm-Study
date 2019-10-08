//
//  1436.cpp
//  Step10-Brute Force
//
//  Created by 김예빈 on 2019. 9. 5..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, result = 0, cnt = 666;
    
    cin >> n;
    
    while(1) {
        string str = to_string(cnt);
        
        if(str.find("666") != -1)
            result++;
        
        if(result == n) {
            cout << str;
            break;
        }
        
        cnt++;
    }

    return 0;
}
