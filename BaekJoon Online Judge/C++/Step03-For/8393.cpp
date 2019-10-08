//
//  8393.cpp
//  Step3-For
//
//  Created by 김예빈 on 2019. 8. 29..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n, sum = 0;
    
    cin >> n;
    
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    
    cout << sum;
    
    return 0;
}
