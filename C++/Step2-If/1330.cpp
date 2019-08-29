//
//  1330.cpp
//  Step2-If
//
//  Created by 김예빈 on 2019. 8. 28..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a, b;
    
    cin >> a >> b;
    
    if (a > b)
        cout << ">";
    else if (a < b)
        cout << "<";
    else
        cout << "==";
    
    return 0;
}
