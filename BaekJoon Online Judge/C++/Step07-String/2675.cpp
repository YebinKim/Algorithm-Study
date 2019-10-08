//
//  2675.cpp
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
    int n, count, i, j;
    
    cin >> n;
    
    while (n--) {
        cin >> count >> str;
        
        for (i = 0; i < str.length(); i++) {
            for (j = 0; j < count; j++)
                cout << str[i];
        }
        
        cout << "\n";
    }
    
    return 0;
}
