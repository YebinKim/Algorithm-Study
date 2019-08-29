//
//  10430.cpp
//  Step1-I/O-and-Arithmetic
//
//  Created by 김예빈 on 2019. 8. 28..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a, b, c;
    
    cin >> a >> b >> c;
    
    cout << (a + b) % c << endl;
    cout << (a % c + b % c) % c << endl;
    cout << (a * b) % c << endl;
    cout << (a % c * b % c) % c << endl;
    
    return 0;
}
