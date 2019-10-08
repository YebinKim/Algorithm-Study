//
//  1152.cpp
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
    
    string str;
    int count = 1, i;
    
    getline(cin, str);
    
    for (i = 0; i < str.length(); i++) {
        if (str[i] == ' ')
            count++;
    }
    
    if (str[0] == ' ')
        count--;
    
    if (str[str.length() - 1] == ' ')
        count--;
    
    cout << count;
    
    return 0;
}
