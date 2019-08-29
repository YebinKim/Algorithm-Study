//
//  10950.cpp
//  Step3-For
//
//  Created by 김예빈 on 2019. 8. 29..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n, a, b;
    
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        cout << a + b << endl;
    }
    
    return 0;
}
