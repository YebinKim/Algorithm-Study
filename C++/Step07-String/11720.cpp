//
//  11720.cpp
//  Step7-String
//
//  Created by 김예빈 on 2019. 9. 1..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    string str, num_str;
    int n, sum = 0, i;
    
    cin >> n >> str;
    
    for (i = 0; i < n; i++) {
        num_str = str[i];
        sum += stoi(num_str);
    }
    
    cout << sum;
    
    return 0;
}
