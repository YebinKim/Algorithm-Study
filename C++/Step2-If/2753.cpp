//
//  2753.cpp
//  Step2-If
//
//  Created by 김예빈 on 2019. 8. 28..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int year;
    
    cin >> year;
    
    if (year % 400 == 0)
        cout << "1";
    else if (year % 4 == 0 && year % 100 != 0)
        cout << "1";
    else
        cout << "0";
    
    return 0;
}
