//
//  10872.cpp
//  Step6-Function
//
//  Created by 김예빈 on 2019. 8. 31..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int factorial(int);

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n;
    
    cin >> n;
    
    cout << factorial(n);
    
    return 0;
}

int factorial(int input) {
    if (input == 0)
        return 1;
    else
        return input * factorial(input - 1);
}
