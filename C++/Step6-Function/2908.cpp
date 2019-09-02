//
//  2908.cpp
//  Step7-String
//
//  Created by 김예빈 on 2019. 9. 1..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

string reverse(string);

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    string str1, str2, rev1, rev2;
    
    cin >> str1 >> str2;
    
    rev1 = reverse(str1);
    rev2 = reverse(str2);
    
    if (rev1 > rev2)
        cout << rev1;
    else
        cout << rev2;
    
    return 0;
}

string reverse(string input) {
    string output = "000";
    
    for (int i = 0; i < 3; i++)
        output[i] = input[2 - i];
        
    return output;
}
