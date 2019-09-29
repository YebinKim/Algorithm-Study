//
//  4673.cpp
//  Step6-Function
//
//  Created by 김예빈 on 2019. 8. 31..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int D(int);
const int NUMBER = 10000;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int num, i;
    bool selfNum[NUMBER] = { 0, };
    
    for (i = 0; i < NUMBER; i++) {
        num = D(i) - 1;
        
        if (num < NUMBER)
            selfNum[num] = true;
    }
    
    for (i = 0; i < NUMBER; i++) {
        if(selfNum[i] == false)
            cout << i << "\n";
    }
    
    return 0;
}

int D(int input) {
    int output = input + 1;
    
    while (input > 0) {
        output += input % 10;
        input /= 10;
    }
    
    return output;
}
