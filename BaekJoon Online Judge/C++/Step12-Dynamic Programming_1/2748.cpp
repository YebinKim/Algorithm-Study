//
//  2748.cpp
//  Step12-Dynamic Programming_1
//
//  Created by 김예빈 on 2019. 9. 6..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, i;
    
    cin >> n;
    
    long fib[n + 1];
    fib[0] = 0;
    fib[1] = 1;
    
    for(i = 2; i <= n; i++)
        fib[i] = fib[i - 1] + fib[i - 2];
    
    cout << fib[n];

    return 0;
}
