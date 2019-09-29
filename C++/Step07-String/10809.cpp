//
//  10809.cpp
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
    const int COUNT = 26;
    int alphabet[COUNT];
    int temp, i;
    
    for (i = 0; i < COUNT; i++)
        alphabet[i] = -1;
    
    cin >> str;
    
    for(i = 0; i < str.length(); i++) {
        temp = str[i] - 97;
        
        if (alphabet[temp] == -1)
            alphabet[temp] = i;
    }
    
    for (i = 0; i < COUNT; i++)
        cout << alphabet[i] << " ";
    
    return 0;
}
