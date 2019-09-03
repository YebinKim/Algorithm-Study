//
//  1316.cpp
//  Step7-String
//
//  Created by 김예빈 on 2019. 9. 2..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    string str;
    int n, result, temp_num, i;
    char temp_ch;
    
    cin >> n;
    
    result = n;
    
    while (n--) {
        bool alphabet[26] = { 0, };
        
        cin >> str;
        
        for (i = 0; i < str.length(); i++) {
            temp_num = str[i] - 'a';
            temp_ch = str[i];
            
            if (alphabet[temp_num]) {
                result--;
                break;
            }
            else {
                if (str[i] != str[i + 1])
                    alphabet[temp_num] = true;
            }
        }
    }
    
    cout << result;
    
    return 0;
}
