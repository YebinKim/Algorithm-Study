//
//  1157.cpp
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
    int alphabet[26] = { 0, };
    int max = 0, temp, i;
    char ans;
    
    cin >> str;
    
    for (i = 0; i < str.length(); i++) {
        temp = str[i];
        
        if (temp <= 90)
            temp += 32;
        
        alphabet[temp - 97]++;
    }
    
    for (i = 0; i < 26; i++) {
        if (alphabet[i] > max) {
            max = alphabet[i];
            ans = i + 65;
        } else if (alphabet[i] == max)
            ans = '?';
    }
    
    cout << ans;
    
    return 0;
}
