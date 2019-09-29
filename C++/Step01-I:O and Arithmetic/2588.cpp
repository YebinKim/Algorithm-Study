//
//  2588.cpp
//  Step1-I/O-and-Arithmetic
//
//  Created by 김예빈 on 2019. 8. 28..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a, b, c, count = 0;
    int div[3];
    
    cin >> a >> b;
    c = b;
    
    while(count < 3)
    {
        div[count] = c % 10;
        c /= 10;
        cout << a * div[count] << endl;
        
        count++;
    }
    
    cout << a * b << endl;
    
    return 0;
}
