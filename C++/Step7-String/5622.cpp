//
//  5622.cpp
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
    int total = 0, i;
    
    cin >> str;
    
    for (i = 0; i < str.length(); i++) {
        if ('A' <= str[i] && str[i] <= 'C')
            total += 2;
        else if ('D' <= str[i] && str[i] <= 'F')
            total += 3;
        else if ('G' <= str[i] && str[i] <= 'I')
            total += 4;
        else if ('J' <= str[i] && str[i] <= 'L')
            total += 5;
        else if ('M' <= str[i] && str[i] <= 'O')
            total += 6;
        else if ('P' <= str[i] && str[i] <= 'S')
            total += 7;
        else if ('T' <= str[i] && str[i] <= 'V')
            total += 8;
        else if ('W' <= str[i] && str[i] <= 'Z')
            total += 9;
    }
    
    total += str.length();
    
    cout << total;
    
    return 0;
}
