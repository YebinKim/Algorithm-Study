//
//  1065.cpp
//  Step6-Function
//
//  Created by 김예빈 on 2019. 8. 31..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int checkSequence(int);

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n;
    
    cin >> n;
    
    cout << checkSequence(n);
    
    return 0;
}

int checkSequence(int input) {
    int n1, n2, n3, count = 0;
    
    if (input < 100)
        return input;
    else {
        for (int i = 100; i <= input; i++) {
            n1 = i % 10;
            n2 = (i % 100) / 10;
            n3 = i / 100;
            
            if ((n3 - n2) == (n2 - n1))
                count++;
        }
        
        input = count + 99;
        
        return input;
    }
}
