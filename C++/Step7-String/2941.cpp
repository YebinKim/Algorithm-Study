//
//  2941.cpp
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
    
    string alphabet[8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
    string str, temp;
    int total = 0, find, i, j;
    
    cin >> str;
    
    for (i = 0; i < 8; i++) {
        find = str.find(alphabet[i]);
        
        if (find != -1) {
            for (j = 0; j < alphabet[i].length(); j++)
                 temp.append("*");
            
            str.replace(find, alphabet[i].length(), temp);
            total++;
            
            i = -1;
        }
    }
    
    for (i = 0; i < str.length(); i++)
        if (str[i] != '*')
            total++;
    
    cout << total;
    
    return 0;
}
