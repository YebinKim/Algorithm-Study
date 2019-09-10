//
//  1541.cpp
//  Step13-Greedy Algorithm
//
//  Created by 김예빈 on 2019. 9. 10..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    string str, sub_str = "";
    int sum = 0;
    bool minus = false;
    
    cin >> str;
    
    for(int i = 0; i <= str.size(); i++) {
        if(str[i] == '-' || str[i] == '+' || str[i] == '\0') {
            if(!minus)
                sum += stoi(sub_str);
            else
                sum -= stoi(sub_str);
            
            if(str[i] == '-')
                minus = true;
            
            sub_str = "";
        } else
            sub_str += str[i];
    }
    
    cout << sum;
    
    return 0;
}
