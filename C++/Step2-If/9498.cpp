//
//  9498.cpp
//  Step2-If
//
//  Created by 김예빈 on 2019. 8. 28..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    
    cin >> n;
    
    if (n >= 90)
        cout << "A";
    else if (n >= 80)
        cout << "B";
    else if (n >= 70)
        cout << "C";
    else if (n >= 60)
        cout << "D";
    else
        cout << "F";
    
    return 0;
}
