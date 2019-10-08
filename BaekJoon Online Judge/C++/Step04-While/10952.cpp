//
//  10952.cpp
//  Step4-While
//
//  Created by 김예빈 on 2019. 8. 29..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int a, b;
    
    cin >> a >> b;
    
    while(a != 0 && b != 0)
    {
        cout << a + b << "\n";
        cin >> a >> b;
    }
    
    return 0;
}
